#pragma once
/*
 @Author: LemonFlavoredSoda
 @Date: 2024年 10月 26日 星期六 09:37:55 CST
*/
#ifndef _REMOVEPERSON_DTO_
#define _REMOVEPERSON_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class RemovePersonDTO : public oatpp::DTO
{
	DTO_INIT(RemovePersonDTO, DTO);
	// 群组标识
	DTO_FIELD(String, GROUP_XID);
	DTO_FIELD_INFO(GROUP_XID) {
		info->description = ZH_WORDS_GETTER("organization.group.field.group_xid");
	}
	//个人成员标识
	DTO_FIELD(Vector<String>, xpersonList);
	DTO_FIELD_INFO(xpersonList) {
		info->description = ZH_WORDS_GETTER("organization.group.field.xpersonList");
	}

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_REMOVEPERSON_DTO_