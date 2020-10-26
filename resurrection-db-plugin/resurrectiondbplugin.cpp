#include "resurrectiondbplugin.h"

// 导出函数
void* GetPlugin(QNetworkAccessManager* manager){
    return new ResurrectionDbPlugin(manager);
}

ResurrectionDbPlugin::ResurrectionDbPlugin(QNetworkAccessManager* manager)
{
    // 初始化manager
    if (manager) {
        m_pManager = manager;
        m_autocreate = false;
    } else {
        m_pManager = new QNetworkAccessManager;
        m_autocreate = true;
    }
    m_userDb.setManager(m_pManager);
    m_accountDb.setManager(m_pManager);
    qDebug() << "数据库初始化";
}


ResurrectionDbPlugin::~ResurrectionDbPlugin() {
    // 释放自动创建的网络访问器
    if (!m_autocreate) {
        delete m_pManager;
        m_pManager = NULL;
    }
}

UserDB* ResurrectionDbPlugin::GetUserDb(){
    qDebug() << "获取用户操作对象";
    return &m_userDb;
}

AccountDB* ResurrectionDbPlugin::GetAccountDb(){
    return &m_accountDb;
}
