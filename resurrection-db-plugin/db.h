#ifndef DB_H
#define DB_H

#include <QObject>
#include <QtNetwork>

class DB
{
protected:
    // 网络访问器
    QNetworkAccessManager* m_manager;
public:
    explicit DB();
    virtual void setManager(QNetworkAccessManager* manager);
};


#endif // DB_H
