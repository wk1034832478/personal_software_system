#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>
#include <pluginloader.h>
#include <QDomDocument>
#include <QFile>

/**
 * 读取配置文件信息
 * @brief ReadConfig
 * @return
 */
Configuration* ReadConfig();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 显示欢迎界面图画
    QPixmap map("welcome.png");
    QSplashScreen ss(map);
    ss.show();

    // 创建网络连接对象
    QNetworkAccessManager* manager = new QNetworkAccessManager;

    // 读取配置文件
    Configuration* config = ReadConfig();
    // 加载插件
    PLuginLoader* loader = PLuginLoader::GetLoader();
    loader->loadPlugin(*config, manager);

    // 仍然可以处理事件
    a.processEvents();
    MainWindow w;
    w.show();

    ss.finish(&w);

    return a.exec();
}

Configuration* ReadConfig(){
    qDebug() << QString("start read config");
    Configuration* configuration = new Configuration;
    // 写绝对路径可以读取得到
    QString config = "E:\\personal_software_system\\Resurrection\\debug\\resurrection.xml";
    // QString config = "./resurrection.xml";
    // QString config = "welcome.png";
    QDomDocument doc("resurrection");
    QFile file(config);
    qDebug() << file.exists();
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return NULL;
    if (!doc.setContent(&file)) {
        file.close();
        return NULL;
    }
    file.close();

    QDomElement docElem1 = doc.documentElement();

    QDomNode nn = docElem1.firstChild();
    while(!nn.isNull()) {
        QDomElement e = nn.toElement(); // try to convert the node to an element.
        if(!e.isNull()) {
            qDebug() << qPrintable(e.tagName()) << Qt::endl; // the node really is an element.
        }
        nn = nn.nextSibling();
    }

    // print out the element names of all elements that are direct children
    // of the outermost element.
    QDomElement docElem = doc.documentElement();
    qDebug() << "测试";
    qDebug() << "顶级元素名称：" << docElem.tagName();

    if (!docElem.isNull()) {
        QDomElement datanode = docElem.firstChildElement(); // 数据顶级节点
        while (!datanode.isNull()) {
            if (datanode.tagName() == QString("plugins")) { // 插件列表
                QDomElement plugin = datanode.firstChildElement();

                while (true) {
                    QDomElement nameEle = plugin.firstChildElement();
                    QDomElement fileEle = nameEle.nextSiblingElement();
                    QDomElement versionEle = fileEle.nextSiblingElement();

                    QString name =nameEle.text();
                    QString file =fileEle.text();
                    QString version =versionEle.text();

                    struct plugin plg;
                    plg.name = name;
                    plg.file = file;
                    plg.version = version;

                    configuration->plugins.append(plg);

                    if (plugin == plugin.lastChildElement()) {
                        break;
                    }

                    plugin = plugin.nextSiblingElement();
                }
            }

            datanode = datanode.nextSiblingElement();
        }
    }

    qDebug() << "读取配置信息完成！";
    return configuration;
}
