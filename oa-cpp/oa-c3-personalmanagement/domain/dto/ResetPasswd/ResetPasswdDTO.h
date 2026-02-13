#pragma once

#ifndef _RESETPASSWDDTO_H_
#define _RESETPASSWDDTO_H_

#include "../../GlobalInclude.h"
#include "ApiHelper.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 向下层传递人员id和密文
 */
class ResetPasswdDTO : public oatpp::DTO
{
	DTO_INIT(ResetPasswdDTO, DTO)

	// 个人id
	DTO_FIELD(String, id);
	DTO_FIELD_INFO(id) {
		info->description =
			ZH_WORDS_GETTER("personal-management.reset-passwd.field.id");
	}

	// 密文
	DTO_FIELD(String, passwd);
	DTO_FIELD_INFO(passwd) {
		info->description =
			ZH_WORDS_GETTER("personal-management.reset-passwd.field.passwd");
	}
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_RESETPASSWDDTO_H_
