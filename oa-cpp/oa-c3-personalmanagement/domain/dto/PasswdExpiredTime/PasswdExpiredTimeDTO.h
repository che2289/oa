#pragma once

#ifndef _PASSWDEXPIREDTIMEDTO_H_
#define _PASSWDEXPIREDTIMEDTO_H_

#include "../../GlobalInclude.h"
#include "ApiHelper.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class PasswdExpiredTimeDTO : public oatpp::DTO
{
	DTO_INIT(PasswdExpiredTimeDTO, DTO)

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

#endif // !_PASSWDEXPIREDTIMEDTO_H_