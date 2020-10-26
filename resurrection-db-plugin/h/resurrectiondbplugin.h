#ifndef RESURRECTIONDBPLUGIN_H
#define RESURRECTIONDBPLUGIN_H

#include <QtNetwork>

#include "resurrection-db-plugin_global.h"
#include "userdb.h"


class RESURRECTIONDBPLUGIN_EXPORT ResurrectionDbPlugin
{
private:
    // 网络访问器，需要外部在调用本数据库操作插件的时候传入一个网络访问器，确保应用的唯一会话
    // 如果没有传入，则自动创建一个
    QNetworkAccessManager* m_pManager;
    // 网络访问器是否自动创建
    bool m_autocreate;
    // 以下数据库访问API
    // 用户访问API
    UserDB m_userDb;
public:
    ResurrectionDbPlugin(QNetworkAccessManager* manager);
    ~ResurrectionDbPlugin();
};


/**
 * 获取数据库插件接口
 */
extern "C" {
    RESURRECTIONDBPLUGIN_EXPORT ResurrectionDbPlugin* GetDbInterface();
}

#endif // RESURRECTIONDBPLUGIN_H
