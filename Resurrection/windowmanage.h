#ifndef WINDOWMANAGE_H
#define WINDOWMANAGE_H

#include <QMap>
#include <QDialog>
#include <QObject>
#include <QMutex>

/**
 * 负责所有窗口的管理
 * @brief The WindowManage class
 */
class WindowManage : public QObject
{
    Q_OBJECT
public:
    explicit WindowManage(QObject *parent = nullptr);
    // 获取单例
    static WindowManage* GetWM() {
        QMutex qm;
        qm.lock();

        if (wm == NULL) {
            wm = new WindowManage;
        }

        qm.unlock();
        return wm;
    }
public:
    // 打开默认窗口（没有就创建）
    void OpenDefaultDialog(QString);
private:
    // 默认窗口
    QMap<QString, QDialog*> defaultDialogs;
    static WindowManage* wm;
signals:
};

#endif // WINDOWMANAGE_H
