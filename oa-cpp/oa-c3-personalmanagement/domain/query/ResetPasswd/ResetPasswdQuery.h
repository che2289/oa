#pragma once

#ifndef _RESETPASSWDQUERY_H_
#define _RESETPASSWDQUERY_H_

#include "../../GlobalInclude.h"
#include "ApiHelper.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 通过个人id重置人员密码
 */
class ResetPasswdQuery : public oatpp::DTO
{
	DTO_INIT(ResetPasswdQuery, DTO)

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

#endif // !_RESETPASSWDQUERY_H_
