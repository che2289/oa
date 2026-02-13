#pragma once

#ifndef _CHANGEPERSONPROFILEDTO_H_
#define _CHANGEPERSONPROFILEQUERY_H_

#include "../../GlobalInclude.h"
#include "ApiHelper.h"

#include OATPP_CODEGEN_BEGIN(DTO)


/**
 * 向下层传递人员id和头像
 */
class ChangePersonProfileDTO : public oatpp::DTO
{
	DTO_INIT(ChangePersonProfileDTO, DTO)

    // 用户ID
    DTO_FIELD(String, xid);
    DTO_FIELD_INFO(xid) {
        info->description = ZH_WORDS_GETTER("changeprofile.user.field.id"); 
    }

    // 头像URL
    API_DTO_FIELD_DEFAULT(String, xicon, ZH_WORDS_GETTER("changeprofile.user.field.xiconUrl"));
    API_DTO_FIELD_DEFAULT(String, xiconLdpi, ZH_WORDS_GETTER("changeprofile.user.field.xiconLdpiUrl"));
    API_DTO_FIELD_DEFAULT(String, xiconMdpi, ZH_WORDS_GETTER("changeprofile.user.field.xiconMdpiUrl"));
};

#include OATPP_CODEGEN_END(DTO)

#endif 