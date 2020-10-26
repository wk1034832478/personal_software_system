#ifndef USERDB_H
#define USERDB_H

#include <QObject>
#include <QtNetwork>
#include <QList>

#include "db.h"
#include "datatype.h"

class UserDB : public DB
{
    Q_OBJECT
public:
    explicit UserDB(QObject *parent = nullptr);
    /**
     * 通过用户名和密码查询用户信息(写的比较繁琐，后续查询方法要封装可复用代码)
     * @brief SelectUserByUsernameAndPasswd
     * @param u 用户名
     * @param pwd 密码
     * @return
     */
    virtual RUser* SelectUserByUsernameAndPasswd(const QString& u, const QString& pwd);
signals:

};

#endif // USERDB_H
