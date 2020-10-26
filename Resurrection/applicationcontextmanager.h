#ifndef APPLICATIONCONTEXTMANAGER_H
#define APPLICATIONCONTEXTMANAGER_H

#include <QObject>
#include "datatype.h"

class ApplicationContextManager : public QObject
{
    Q_OBJECT
public:
    explicit ApplicationContextManager(QObject *parent = nullptr);
private:
    static ApplicationContext* context;
public:
    static ApplicationContext* getContext();
    /**
     * 更新用户信息
     * @brief UpdateUserInfo
     */
    static void updateUserInfo(RUser);
signals:

};

#endif // APPLICATIONCONTEXTMANAGER_H
