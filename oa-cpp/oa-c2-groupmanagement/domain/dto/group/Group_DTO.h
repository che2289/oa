#pragma once
#ifndef _GROUP_DTO_
#define _GROUP_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class Group_DTO : public oatpp::DTO
{
	DTO_INIT(Group_DTO, DTO);
	//编号
	API_DTO_FIELD_DEFAULT(String, xid, ZH_WORDS_GETTER("group.field.id"));
	//姓名
	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("group。field.name"));
	//描述
	API_DTO_FIELD_DEFAULT(String, xdescription, ZH_WORDS_GETTER("group.field.info"));
};

class User_DTO : public oatpp::DTO
{
	DTO_INIT(User_DTO, DTO);
	// 人员工号
	API_DTO_FIELD_DEFAULT(Int32, xorderNumber, ZH_WORDS_GETTER("role.field.id"));
	// 人员名称
	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("role.field.name"));
	// 手机号码
	API_DTO_FIELD_DEFAULT(String, xmobile, ZH_WORDS_GETTER("role.field.phone"));
	// 邮件地址
	API_DTO_FIELD_DEFAULT(String, xmail, ZH_WORDS_GETTER("role.field.mail"));
	// 群组编码
	API_DTO_FIELD_DEFAULT(String, GROUP_XID, ZH_WORDS_GETTER("group.field.id"));
	//// 个人编码
	//API_DTO_FIELD_DEFAULT(String, xid, ZH_WORDS_GETTER("role.field.id"));
};

/**
 * 示例分页传输对象
 */
class UserPageDTO : public PageDTO<User_DTO::Wrapper>
{
	DTO_INIT(UserPageDTO, PageDTO<User_DTO::Wrapper>);
};



#include OATPP_CODEGEN_END(DTO)
#endif // !_GROUP_DTO_