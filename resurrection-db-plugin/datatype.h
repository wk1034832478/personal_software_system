#ifndef DATATYPE_H
#define DATATYPE_H

#include <QString>
#include <QList>
/*
 * 定义本系统常用的数据类型
*/


/*
 * 基本用户信息
 */
typedef struct user {
    int id; // id主键
    QString username; // 用户名
    QString passwd; // 密码
    QString name; // 姓名
} RUser;

/*
 * 账户信息
 */
typedef struct account {
    int id;
    QString username;
    QString passwd; // 密码
    QString platform; // 平台
    QString email;
    QString bindPhone;
    int userId; // 所属用户id
} RAccount;

/*
* 插件数据结构
*/
typedef struct plugin {
    QString name;
    QString file;
    QString version;
} Plugin;

/*
* 存储配置文件信息
*/
typedef struct  configuration
{
    // 插件列表
    QList<Plugin> plugins;
} Configuration;

/*
* 应用程序状态
*/
typedef struct applicationcontext
{
    RUser* user; // 用户信息
} ApplicationContext;

/**
 * 服务器响应状态码
 * @brief The ResponseCode enum
 */
enum ResponseCode {
    OK = 10001, // 成功
    ERROR = 10002 // 失败
};

// api地址
const QString API = "http://localhost:8080";
// 查询用户地址
const QString API_SELECT_USER_U_P = API + "/api/select/user";
// 更改用户地址
const QString API_UPDATE_USER_U_P = API + "/api/update/user";
// 添加用户地址
const QString API_ADD_USER_U_P = API + "/api/add/user";
// 查询账户地址
const QString API_SELECT_ACCOUNT_U_P = API + "/api/select/account";
// 添加账户
const QString API_ADD_ACCOUNT_U_P = API + "/api/add/account";
#endif // DATATYPE_H
