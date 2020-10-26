#include "pluginloader.h"
#include <QLibrary>
#include <QNetworkAccessManager>

PLuginLoader* PLuginLoader::loader = NULL;

PLuginLoader::PLuginLoader(QObject *parent) : QObject(parent)
{

}

void PLuginLoader::loadPlugin(const Configuration& config, QNetworkAccessManager* manager){
    for (int i = 0; i < config.plugins.size(); ++i) {
        QLibrary* demoDll = new QLibrary(config.plugins[i].file);
        if (demoDll->load()) {
            GetPlugin obj = (GetPlugin)demoDll->resolve("GetPlugin");
            void* plugin = obj(manager);
            plugins.insert(config.plugins[i].name, plugin);
            qDebug() << "插件【"  << config.plugins[i].name << "】加载成功";
        }
    }
}


void* PLuginLoader::GetPluginByName(QString name) {
    void* plugin = NULL;

    if (plugins.contains(name)) {
        plugin = plugins.value(name);
    }

    return plugin;
}
