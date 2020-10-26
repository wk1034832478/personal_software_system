package com.example.demo.entity;

import java.io.Serializable;
/**
 * 账户实体类，存储用户的账户
 * @author wk
 *
 */
public class RAccount implements Serializable{

	/**
	 * 
	 */
	private static final long serialVersionUID = 858236348343496871L;

	private int id;
	private String username;
	private String passwd;
	private String platform;
	private String email;
	private String bindPhone;
	private int userId;
	
	public RAccount() {}
	
	public RAccount(int id, String username, String passwd, String platform, String email, String bindPhone,
			int userId) {
		super();
		this.id = id;
		this.username = username;
		this.passwd = passwd;
		this.platform = platform;
		this.email = email;
		this.bindPhone = bindPhone;
		this.userId = userId;
	}

	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getPasswd() {
		return passwd;
	}
	public void setPasswd(String passwd) {
		this.passwd = passwd;
	}
	public String getPlatform() {
		return platform;
	}
	public void setPlatform(String platform) {
		this.platform = platform;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getBindPhone() {
		return bindPhone;
	}
	public void setBindPhone(String bindPhone) {
		this.bindPhone = bindPhone;
	}
	public int getUserId() {
		return userId;
	}
	public void setUserId(int userId) {
		this.userId = userId;
	}
	
	
	
}

