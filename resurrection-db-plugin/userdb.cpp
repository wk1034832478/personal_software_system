#include "userdb.h"

UserDB::UserDB()
{

}

RUser* UserDB::selectUserByUsernameAndPasswd(const QString& u, const QString& pwd){

    QJsonDocument httpDocum;
    QJsonObject requestData; // 请求数据
    QJsonObject user; // 用户数据
    QByteArray  httpData; // http数据串
    QNetworkRequest request;
    QUrl url;
    // 请求URL
    url.setUrl(API_SELECT_USER_U_P);
    request.setUrl(url);
    // 设置 头信息
    request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json"));
    // 设置用户信息
    user.insert("username", u);
    user.insert("passwd", pwd);

    requestData.insert("data", user);

    // 异步请求
    //post请求的数据是Json格式。首先创建QJsonObject对象，并插入数据。
    httpDocum.setObject(requestData);
    httpData = httpDocum.toJson(QJsonDocument::Compact);
    // 同步请求
    QEventLoop eventLoop;
    QObject::connect(this->m_manager, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    QNetworkReply* reply = this->m_manager->post(request, httpData);

    eventLoop.exec();

    if (reply->error() == QNetworkReply::NoError) {
        RUser* user = NULL;
        QByteArray data = reply->readAll();
        QJsonObject obj = QJsonDocument::fromJson(data).object();
        if (obj.value("data").isNull()) {
            // process
        } else {
            QJsonObject data = obj.value("data").toObject();
            user = new RUser;
            user->id = data.value("id").toInt();
            user->username = data.value("username").toString();
            user->passwd = data.value("passwd").toString();
            user->name = data.value("name").toString();
        }
        return user;
    } else {
        return NULL;
    }
}

bool UserDB::updateUser(RUser* user){
    QJsonDocument httpDocum;
    QJsonObject requestData; // 请求数据
    QJsonObject userData; // 用户数据
    QByteArray  httpData; // http数据串
    QNetworkRequest request;
    QUrl url;
    // 请求URL
    url.setUrl(API_UPDATE_USER_U_P);
    request.setUrl(url);
    // 设置 头信息
    request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json"));
    // 设置用户信息
    userData.insert("id", QString::number(user->id));
    userData.insert("username", user->username);
    userData.insert("passwd", user->passwd);
    userData.insert("name", user->name);

    requestData.insert("data", userData);

    // 异步请求
    //post请求的数据是Json格式。首先创建QJsonObject对象，并插入数据。
    httpDocum.setObject(requestData);
    httpData = httpDocum.toJson(QJsonDocument::Compact);
    // 同步请求
    QEventLoop eventLoop;
    QObject::connect(this->m_manager, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    QNetworkReply* reply = this->m_manager->post(request, httpData);

    eventLoop.exec();

    if (reply->error() == QNetworkReply::NoError) {
        QByteArray data = reply->readAll();
        QJsonObject obj = QJsonDocument::fromJson(data).object();
        if (obj.value("code").toInt() == OK) {
            return true;
        } else {
           return false;
        }

    } else {
        return false;
    }
}

bool UserDB::addUser(RUser *user){
    QJsonDocument httpDocum;
    QJsonObject requestData; // 请求数据
    QJsonObject userData; // 用户数据
    QByteArray  httpData; // http数据串
    QNetworkRequest request;
    QUrl url;
    // 请求URL
    url.setUrl(API_ADD_USER_U_P);
    request.setUrl(url);
    // 设置 头信息
    request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json"));
    // 设置用户信息
    userData.insert("username", user->username);
    userData.insert("passwd", user->passwd);
    userData.insert("name", user->name);

    requestData.insert("data", userData);

    // 异步请求
    //post请求的数据是Json格式。首先创建QJsonObject对象，并插入数据。
    httpDocum.setObject(requestData);
    httpData = httpDocum.toJson(QJsonDocument::Compact);
    // 同步请求
    QEventLoop eventLoop;
    QObject::connect(this->m_manager, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));
    QNetworkReply* reply = this->m_manager->post(request, httpData);

    eventLoop.exec();

    if (reply->error() == QNetworkReply::NoError) {
        QByteArray data = reply->readAll();
        QJsonObject obj = QJsonDocument::fromJson(data).object();
        if (obj.value("code").toInt() == OK) {
            return true;
        } else {
           return false;
        }

    } else {
        return false;
    }
}
