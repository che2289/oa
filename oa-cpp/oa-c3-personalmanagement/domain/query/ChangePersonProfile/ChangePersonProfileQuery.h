#pragma once

#ifndef _CHANGEPERSONPROFILEQUERY_H_
#define _CHANGEPERSONPROFILEQUERY_H_

#include "../../GlobalInclude.h"
#include "ApiHelper.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 通过个人id更换人员头像
 */
class ChangePersonProfileQuery : public oatpp::DTO
{
	DTO_INIT(ChangePersonProfileQuery, DTO)

	// 用户ID
	DTO_FIELD(String, userId);
	DTO_FIELD_INFO(userId) {
		info->description = ZH_WORDS_GETTER("changeprofile.user.field.id");
	}
	// 头像URL
	API_DTO_FIELD_DEFAULT(String, url, ZH_WORDS_GETTER("changeprofile.user.field.avatarUrl"));

};

#include OATPP_CODEGEN_END(DTO)

#endif 