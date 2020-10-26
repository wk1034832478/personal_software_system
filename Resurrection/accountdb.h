#ifndef ACCOUNTDB_H
#define ACCOUNTDB_H
#include <QList>

#include "db.h"
#include "datatype.h"

class AccountDB : public DB
{
public:
    AccountDB() {};
    /**
     * 查询账户信息
     * @brief selectAccounts
     * @return
     */
    virtual QList<RAccount> selectAccounts(RAccount);

    virtual void addRaccount(RAccount* ac);
};

#endif // ACCOUNTDB_H
