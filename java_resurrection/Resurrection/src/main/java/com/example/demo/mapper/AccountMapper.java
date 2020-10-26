package com.example.demo.mapper;

import java.util.List;

import org.apache.ibatis.annotations.Insert;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Options;
import org.apache.ibatis.annotations.Param;
import org.apache.ibatis.annotations.Select;

import com.example.demo.entity.RAccount;

/**
 * lucene
 * @author wk
 *
 */
@Mapper
public interface AccountMapper {
	
	/**
	  * 账户综合查询, 后续模糊改成用INSTR函数进行优化
	 * @param account
	 * @return
	 */
	@Select("SELECT id,username, passwd, bind_phone bindphone, platform, email, "
			+ "user_Id userId FROM r_account "
			+ "WHERE (username LIKE '%${account.username}%'  OR username IS NULL)"
			+ "AND (bind_phone LIKE '%${account.bindPhone}%'  OR bind_phone IS NULL)"
			+ "AND (platform LIKE '%${account.platform}%'  OR platform IS NULL)"
			+ "AND (email LIKE '%${account.email}%'  OR email IS NULL)"
			+ "AND user_id = ${account.userId}")
	List<RAccount> selectAccounts(@Param("account") RAccount account);
	

	/**
	 * 插入之后会将操作对象的id属性设置为新插入的id值
	 * @param account
	 * @return
	 */
	@Insert(value = "INSERT INTO r_account (username, passwd, bind_phone, platform, email, user_Id)"
			+ " VALUES(#{account.username}, #{account.passwd}, #{account.bindPhone}, #{account.platform},"
			+ " #{account.email}, ${account.userId}) ")
	@Options(useGeneratedKeys=true, keyProperty="id")
	Integer addAccount(@Param("account") RAccount account);
}
