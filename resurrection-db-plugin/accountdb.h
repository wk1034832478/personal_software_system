#ifndef ACCOUNTDB_H
#define ACCOUNTDB_H
#include <QList>

#include "db.h"
#include "datatype.h"

class AccountDB : public DB
{
public:
    AccountDB();
    /**
     * 查询账户信息
     * @brief selectAccounts
     * @return
     */
    virtual QList<RAccount> selectAccounts(RAccount);

    /**
     * 添加账户
     * @brief addRaccount
     * @return 添加失败返回空
     */
    virtual void addRaccount(RAccount*);
};

#endif // ACCOUNTDB_H
