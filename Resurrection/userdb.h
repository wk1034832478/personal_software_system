#ifndef USERDB_H
#define USERDB_H

#include <QtNetwork>
#include <QList>

#include "db.h"
#include "datatype.h"

class UserDB : public DB
{
public:
    explicit UserDB();
    /**
     * 通过用户名和密码查询用户信息(写的比较繁琐，后续查询方法要封装可复用代码)
     * @brief SelectUserByUsernameAndPasswd
     * @param u 用户名
     * @param pwd 密码
     * @return
     */
    virtual RUser* selectUserByUsernameAndPasswd(const QString& u, const QString& pwd);
    virtual bool updateUser(RUser* user);
    virtual bool addUser(RUser *user);
};

#endif // USERDB_H
