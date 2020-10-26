#ifndef DB_H
#define DB_H

#include <QObject>
#include <QtNetwork>

class DB : public QObject
{
    Q_OBJECT
protected:
    // 网络访问器
    QNetworkAccessManager* m_manager;
public:
    explicit DB(QObject *parent = nullptr);
    void setManager(QNetworkAccessManager* manager) {
        m_manager = manager;
    }
signals:

};


#endif // DB_H
