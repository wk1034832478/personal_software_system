USE resurrection;

INSERT INTO r_user (username, passwd, name) VALUES("admin", "admin", "王凯");

UPDATE r_user SET passwd = 'admin', name  = '凯'  WHERE id = 1;

SELECT * FROM r_user WHERE id = 1;

INSERT INTO r_user (username, passwd, name) VALUES('root', 'root', 'wk');

SELECT * FROM r_account;
SELECT id,username, passwd, bind_phone bindphone, platform, email, user_id
 FROM r_account 
 WHERE (username LIKE '%%'  OR username IS NULL)
 AND (bind_phone LIKE '%%' OR bind_phone IS NULL)
 AND (platform LIKE '%%' OR platform IS NULL)
 AND (email LIKE '%%'  OR email IS NULL)
 AND user_id = 1
 
INSERT INTO r_account (username, passwd, bind_phone, platform, email, user_id) 
VALUES('wangkai@eparking.com.cn', 'wangkai123', null, 'tpad', 'wangkai@eparking.com.cn', 1);
INSERT INTO r_account (username, passwd, bind_phone, platform, email, user_id) 
VALUES('wangkai@eparking.com.cn', 'wangkai123', null, 'tpad', 'wangkai@eparking.com.cn', 1);
INSERT INTO r_account (username, passwd, bind_phone, platform, email, user_id) 
VALUES('wangkai@eparking.com.cn', 'wangkai123', null, 'tpad', 'wangkai@eparking.com.cn', 1);
INSERT INTO r_account (username, passwd, bind_phone, platform, email, user_id) 
VALUES('wangkai@eparking.com.cn', 'wangkai123', '15605459957', 'tpad', 'wangkai@eparking.com.cn', 1);


 SELECT id,username, passwd, bind_phone, platform, email, user_id 
 FROM r_account
 WHERE 
 username LIKE '%%' 
 OR username IS NULL 
 AND bind_phone LIKE '%%' 
 OR bind_phone IS NULL 
 AND platform LIKE '%%' 
 AND platform IS NULL 
 AND email LIKE '%%' 
 AND email IS NULL 
 AND user_id = 1