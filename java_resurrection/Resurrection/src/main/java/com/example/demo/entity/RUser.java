package com.example.demo.entity;

import java.io.Serializable;
/**
 * 
 * 用户数据对象
 * @author wk
 *
 */
public class RUser implements Serializable{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = -4659448250867997111L;
	
	private int id;
	private String username;
	private String passwd;
	private String name;

	public RUser() {}

	public RUser(int id, String username, String passwd, String name) {
		super();
		this.id = id;
		this.username = username;
		this.passwd = passwd;
		this.name = name;
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

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
	
}
