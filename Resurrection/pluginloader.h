#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QObject>
#include <QMap>
#include <QMutex>
#include <QNetworkAccessManager>
#include <datatype.h>

class PLuginLoader : public QObject
{
    Q_OBJECT
public:
    explicit PLuginLoader(QObject *parent = nullptr);
private:
    // 将加载的插件存储到该map当中
    QMap<QString, void*> plugins;
    // 单例插件加载器
    static PLuginLoader* loader;
public:
    /**
     * 获取插件加载器
     * @brief GetLoader
     * @return
     */
    static PLuginLoader* GetLoader() {
        QMutex qm;
        qm.lock();

        if (loader == NULL) {
            loader = new PLuginLoader;
        }

        qm.unlock();

        return loader;
    }
    /**
     * 加载插件
     * @brief loadPlugin
     * @param config
     */
    void loadPlugin(const Configuration& config, QNetworkAccessManager* manager);

    /**
     * 获取插件
     * @brief GetPlugin
     * @return
     */
    void* GetPluginByName(QString);
signals:

};


// 定义库函数
typedef void* (*GetPlugin)(QNetworkAccessManager*);
#endif // PLUGINLOADER_H
