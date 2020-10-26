package com.example.demo.mapper;

import java.util.List;

import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Param;
import org.apache.ibatis.annotations.Select;
import org.apache.ibatis.annotations.Update;

import com.example.demo.entity.RUser;

/**
 * r_user 用户mapper
 * @author wk
 *
 */
@Mapper
public interface UserMapper {
	
	@Select("SELECT * FROM r_user")
	List<RUser> findAllRUser();
	
	/**
	 * 根据用户名和密码查询用户信息
	 * @param u
	 * @param p
	 * @return
	 */
	@Select("SELECT id, username, passwd, name FROM r_user WHERE username = #{u} AND passwd = #{p}")
	RUser findRUserByUAndP(@Param("u") String u, @Param("p") String p);
	
	/**
	 * 更改用户信息，可以更改密码和姓名
	 * @param id
	 * @param p
	 * @param n
	 * @return
	 */
	@Update("UPDATE r_user SET passwd = #{p}, name  = #{n}  WHERE id = #{id}")
	int updateRUser(@Param("id") Integer id, @Param("p") String p, @Param("n") String n);
	
	/**
	  *  新增用户信息
	 * @param id
	 * @param p
	 * @param n
	 * @return
	 */
	@Update("INSERT INTO r_user (username, passwd, name) VALUES(#{user.username}, #{user.passwd}, #{user.name})")
	int addRUser(@Param("user") RUser user);
}
