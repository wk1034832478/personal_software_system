package com.example.demo.controller;


import java.util.List;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import com.example.demo.entity.RUser;
import com.example.demo.http.ResponseData;
import com.example.demo.mapper.UserMapper;
/**
 * 
 * @author wk
 *
 */
@RestController
public class DemoController {
	
	private Logger logger = LoggerFactory.getLogger(DemoController.class);
	
	@Autowired
	private UserMapper userMapper;
	/**
	 * 作为测试接口、心跳接口，联通测试
	 * @return 
	 */
	@PostMapping("test")
	public ResponseData<String> test(@RequestBody ResponseData<?> jsonParam) {
		List<RUser> users = userMapper.findAllRUser();
		System.out.println("查询结果数量：" + users.size());
		
		// 输出请求参数
		System.out.println("请求参数:" + jsonParam.getMsg());
		ResponseData<String> data =  new ResponseData<String>();
		data.setMsg("what");
		System.out.println("接受到请求！");
		return data;
	}
}
