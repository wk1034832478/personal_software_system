package com.example.demo.http;

import java.io.Serializable;
/**
 * http通讯数据结构
 * @author wk
 *
 */
public class ResponseData<T> implements Serializable{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 2359185290345621043L;
	
	private int code; // 状态码 10001正常  10002错误
	private T data; // 数据对象
	private String msg; // 消息对象
	private String url; // 消息附带链接
	
	public ResponseData(){}
	
	public ResponseData(int code, T data, String msg, String url) {
		super();
		this.code = code;
		this.data = data;
		this.msg = msg;
		this.url = url;
	}


	public int getCode() {
		return code;
	}
	public void setCode(int code) {
		this.code = code;
	}
	public T getData() {
		return data;
	}
	public void setData(T data) {
		this.data = data;
	}
	public String getMsg() {
		return msg;
	}
	public void setMsg(String msg) {
		this.msg = msg;
	}
	public String getUrl() {
		return url;
	}
	public void setUrl(String url) {
		this.url = url;
	}
	
	public static <T> ResponseData<T> ok() {
		ResponseData<T> data = new ResponseData<T>();
		data.code = 10001;
		return data;
	}
	
	public static <T> ResponseData<T> error() {
		ResponseData<T> data = new ResponseData<T>();
		data.code = 10002;
		return data;
	}
	
	public static <T> ResponseData<T> error(String msg) {
		ResponseData<T> data = new ResponseData<T>();
		data.setMsg(msg);
		data.code = 10002;
		return data;
	}
}
