#pragma once
#ifndef _GROUP_DTO_
#define _GROUP_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class GroupDTO : public oatpp::DTO
{
	DTO_INIT(GroupDTO, DTO);
	API_DTO_FIELD(String, id, ZH_WORDS_GETTER("group.field.id"), false, "007");
	//描述
	API_DTO_FIELD(String, info, ZH_WORDS_GETTER("group.field.info"), false, "111");
	//姓名
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("group。field.name"), false, "111");
	
};

class RoleDTO : public oatpp::DTO
{
	DTO_INIT(RoleDTO, DTO);
	// 人员名称
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("role.field.name"), false, "567");
	// 人员工号
	API_DTO_FIELD(Int32, id, ZH_WORDS_GETTER("role.field.id"), false, 1);
	// 手机号码
	API_DTO_FIELD(String, phone, ZH_WORDS_GETTER("role.field.phone"), false, "18584168650");
	// 邮件地址
	API_DTO_FIELD(String, mail, ZH_WORDS_GETTER("role.field.mail"), false, "01xq@qq.com");
};

/**
 * 示例分页传输对象
 */
class RolePageDTO : public PageDTO<RoleDTO::Wrapper>
{
	DTO_INIT(RolePageDTO, PageDTO<RoleDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_GROUP_DTO_