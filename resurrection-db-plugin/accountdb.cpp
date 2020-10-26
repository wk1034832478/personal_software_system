#include "accountdb.h"

AccountDB::AccountDB()
{

}

QList<RAccount> AccountDB::selectAccounts(RAccount a) {
   QList<RAccount> list;
   QJsonDocument httpDocum;
   QJsonObject requestData; // 请求数据
   QJsonObject userData; // 用户数据
   QByteArray  httpData; // http数据串
   QNetworkRequest request;
   QUrl url;
   // 请求URL
   url.setUrl(API_SELECT_ACCOUNT_U_P);
   request.setUrl(url);
   // 设置 头信息
   request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json"));
   // 设置用户信息
   userData.insert("id",  QString::number(a.id));
   userData.insert("username", a.username == "" ? NULL : a.username);
   userData.insert("email", a.email  == "" ? NULL : a.email);
   userData.insert("platform", a.platform  == "" ? NULL : a.platform);
   userData.insert("userId", a.userId);
   userData.insert("bindPhone", a.bindPhone == "" ? NULL : a.bindPhone);

   requestData.insert("data", userData);

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
            QJsonArray accounts = obj.value("data").toArray();

            for (int i = accounts.size() - 1; i >= 0; --i) {
                QJsonObject js = accounts[i].toObject();
                RAccount account;
                account.id = js.value("id").toInt();
                account.username = js.value("username").toString();
                account.passwd = js.value("passwd").toString();
                account.platform = js.value("platform").toString();
                account.bindPhone = js.value("bindPhone").toString();
                account.email = js.value("email").toString();

                list.append(account);
            }
       }
   }

   return list;
}

void AccountDB::addRaccount(RAccount* account) {
    QJsonDocument httpDocum;
    QJsonObject requestData; // 请求数据
    QJsonObject userData; // 用户数据
    QByteArray  httpData; // http数据串
    QNetworkRequest request;
    QUrl url;
    // 请求URL
    url.setUrl(API_ADD_ACCOUNT_U_P);
    request.setUrl(url);
    // 设置头信息
    request.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/json"));
    // 设置用户信息
    userData.insert("username", account->username == "" ? NULL : account->username);
    userData.insert("email", account->email  == "" ? NULL : account->email);
    userData.insert("platform", account->platform  == "" ? NULL : account->platform);
    userData.insert("userId", account->userId);
    userData.insert("bindPhone", account->bindPhone == "" ? NULL : account->bindPhone);
    userData.insert("passwd", account->passwd == "" ? NULL : account->passwd);

    requestData.insert("data", userData);

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
            account->id  = obj.value("data").toObject().value("id").toInt();
        }
    }
}
