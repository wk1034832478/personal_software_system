package com.example.demo.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import com.example.demo.entity.RUser;
import com.example.demo.http.ResponseData;
import com.example.demo.mapper.UserMapper;

@RestController
public class UserController {
	@Autowired
	private UserMapper userMapper;
	
	@PostMapping("api/select/user")
	public ResponseData<RUser> selectUser(@RequestBody ResponseData<RUser> data) {
		RUser user = userMapper.findRUserByUAndP(data.getData().getUsername(), data.getData().getPasswd());
		System.out.println("接受请求！");
		if (user == null) {
			data.setMsg("查询失败");
		} else {
			data.setMsg("查询成功");
		}
		
		data.setData(user);
		
		return data;
	}
	
	@PostMapping("api/update/user")
	public ResponseData<RUser> updateUser(@RequestBody ResponseData<RUser> data) {
		if (userMapper.updateRUser(data.getData().getId(), data.getData().getPasswd(), data.getData().getName()) == 1) {
			return ResponseData.ok();
		} else {
			return ResponseData.error();
		}
	}
	
	@PostMapping("api/add/user")
	public ResponseData<RUser> addUser(@RequestBody ResponseData<RUser> data) {
		try {
			if (userMapper.addRUser(data.getData()) == 1) {
				return ResponseData.ok();
			} else {
				return ResponseData.error();
			}
		} catch (Exception e) {
			return ResponseData.error("账户名已存在或信息填写不完整！");
		}
	}
}
