#pragma once
#ifndef _GROUP_VO_
#define _GROUP_VO_

#include "../../GlobalInclude.h"
#include "../../dto/group/GroupDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class GroupVO : public oatpp::DTO
{
	DTO_INIT(GroupVO, DTO);
	// 编号
	// //数据唯一标识
	API_DTO_FIELD(String, id, ZH_WORDS_GETTER("group.field.id"), true, "007");
	//描述
	API_DTO_FIELD(String, info, ZH_WORDS_GETTER("group.field.info"), true, "111");
	//姓名
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("group。field.name"), true, "111");
	
};

class RoleVO : public oatpp::DTO
{
	DTO_INIT(RoleVO, DTO);
	// 人员名称
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("role.field.name"),false,"567");
	// 人员工号
	API_DTO_FIELD(Int32, id, ZH_WORDS_GETTER("role.field.id"),false,1);
	// 手机号码
	API_DTO_FIELD(String, phone, ZH_WORDS_GETTER("role.field.phone"),false,"18584168650");
	// 邮件地址
	API_DTO_FIELD(String, mail, ZH_WORDS_GETTER("role.field.mail"),false,"01xq@qq.com");
};

/**
 * 示例分页显示JsonVO，用于响应给客户端的Json对象
 */
class RolePageJsonVO : public JsonVO<RolePageDTO::Wrapper> {
	DTO_INIT(RolePageJsonVO, JsonVO<RolePageDTO::Wrapper>);
};
/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */

class GroupJsonVO : public JsonVO<GroupVO::Wrapper> {
	DTO_INIT(GroupJsonVO, JsonVO<GroupVO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif // !_GROUP_VO_