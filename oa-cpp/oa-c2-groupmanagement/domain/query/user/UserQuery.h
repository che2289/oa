#pragma once
#ifndef _USERQUERY_H_
#define _USERQUERY_H_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 定义一个查询用户信息的数据传输模型
 */
class UserQuery : public PageQuery
{
	// 定义初始化
	DTO_INIT(UserQuery, PageQuery);

	//名称
	DTO_FIELD(String, xname);
	DTO_FIELD_INFO(xname) {
		info->description = ZH_WORDS_GETTER("role.field.name");
	}
	// 编号
	DTO_FIELD(UInt32, xorderNumber);
	DTO_FIELD_INFO(xorderNumber) {
		info->description = ZH_WORDS_GETTER("role.field.id");
	}
	// 手机号码
	DTO_FIELD(String, xmobile);
	DTO_FIELD_INFO(xmobile) {
		info->description = ZH_WORDS_GETTER("role.field.phone");
	}
	// 邮件
	DTO_FIELD(String, xmail);
	DTO_FIELD_INFO(xmail) {
		info->description = ZH_WORDS_GETTER("role.field.mail");
	}
	// 邮件
	DTO_FIELD(String, xid);
	DTO_FIELD_INFO(xid) {
		info->description = ZH_WORDS_GETTER("role.field.xid");
	}
	DTO_FIELD(String, GROUP_XID);
	DTO_FIELD_INFO(GROUP_XID) {
		info->description = ZH_WORDS_GETTER("group.field.id");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_USERQUERY_H_