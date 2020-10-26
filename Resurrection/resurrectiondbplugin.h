#ifndef RESURRECTIONDBPLUGIN_H
#define RESURRECTIONDBPLUGIN_H

#include <QtNetwork>

#include "userdb.h"
#include "accountdb.h"

class  ResurrectionDbPlugin
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
     AccountDB m_accountDb;
public:
    ResurrectionDbPlugin(QNetworkAccessManager* manager);
    ~ResurrectionDbPlugin();
    // 获取用户操作对象
    virtual UserDB* GetUserDb();
    virtual AccountDB* GetAccountDb();
};
#endif // RESURRECTIONDBPLUGIN_H
