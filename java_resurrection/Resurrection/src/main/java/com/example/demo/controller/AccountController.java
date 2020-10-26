package com.example.demo.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import com.example.demo.entity.RAccount;
import com.example.demo.http.ResponseData;
import com.example.demo.mapper.AccountMapper;

@RestController
public class AccountController {

	@Autowired
	private AccountMapper accountMapper;
	
	@PostMapping("api/select/account")
	public ResponseData<List<RAccount>> selectAccount(@RequestBody ResponseData<RAccount> data) {
		List<RAccount> accounts = accountMapper.selectAccounts(data.getData());
		ResponseData<List<RAccount>> rdData = ResponseData.ok();
		rdData.setData(accounts);
		System.out.println(rdData.getData().size());
		return rdData;
	}
	
	@PostMapping("api/add/account")
	public ResponseData<RAccount> addAccount(@RequestBody ResponseData<RAccount> data) {
		int id = accountMapper.addAccount(data.getData());
		ResponseData<RAccount> rdData = null;
		if (id != -1) {
			rdData = ResponseData.ok();
			rdData.setData(data.getData());
		} else {
			rdData = ResponseData.error();
		}
		return rdData;
	}
	
}
