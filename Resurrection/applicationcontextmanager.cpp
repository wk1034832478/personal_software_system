#include "applicationcontextmanager.h"
#include <QMutex>
ApplicationContext* ApplicationContextManager::context = NULL;

ApplicationContextManager::ApplicationContextManager(QObject *parent) : QObject(parent)
{

}

ApplicationContext* ApplicationContextManager::getContext(){
    QMutex qm;
    qm.lock();
    if (context == NULL) {
        context = new ApplicationContext;
    }
    qm.unlock();
    return context;
}

void ApplicationContextManager::updateUserInfo(RUser user) {
    QMutex qm;
    qm.lock();

    context->user->name = user.name;
    context->user->passwd = user.passwd;

    qm.unlock();
}
