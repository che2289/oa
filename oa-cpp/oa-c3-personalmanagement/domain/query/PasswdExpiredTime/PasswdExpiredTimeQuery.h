#pragma once

#ifndef _PASSWDEXPIREDTIMEQUERY_H_
#define _PASSWDEXPIREDTIMEQUERY_H_

#include "../../GlobalInclude.h"
#include "ApiHelper.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class PasswdExpiredTimeQuery : public oatpp::DTO
{
	DTO_INIT(PasswdExpiredTimeQuery, DTO)

	// 人员id
	DTO_FIELD(String, id);
	DTO_FIELD_INFO(id) {
		info->description =
			ZH_WORDS_GETTER("personalmanagement.passwd-expired-time.field.id");
	}

	// 日期
	DTO_FIELD(String, date);
	DTO_FIELD_INFO(date) {
		info->description = 
			ZH_WORDS_GETTER("personalmanagement.passwd-expired-time.field.date");
	}
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_PASSWDEXPIREDTIMEQUERY_H_