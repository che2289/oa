#pragma once

#ifndef _MettingCreateDTO_H_
#define _MettingCreateDTO_H_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)
/**
 * 定义一个修改用户信息的数据传输模型
 */
class MettingCreateDTO : public oatpp::DTO
{
	DTO_INIT(MettingCreateDTO, DTO);
	// 会议类型
	API_DTO_FIELD_DEFAULT(String, mettingtype,	ZH_WORDS_GETTER("metting.mettingCreate.mettingtype"));
	// 日期
	API_DTO_FIELD_DEFAULT(String, date1,		ZH_WORDS_GETTER("metting.mettingCreate.date"));
	// 会议开始时间
	API_DTO_FIELD_DEFAULT(String, timestart,	ZH_WORDS_GETTER("metting.mettingCreate.timestart"));
	// 会议结束时间
	API_DTO_FIELD_DEFAULT(String, timeend,		ZH_WORDS_GETTER("metting.mettingCreate.timeend"));
	// 会议室
	API_DTO_FIELD_DEFAULT(String, mettingroom,	ZH_WORDS_GETTER("metting.mettingCreate.mettingroom"));
	// 会议title
	API_DTO_FIELD_DEFAULT(String, mettingtitle, ZH_WORDS_GETTER("metting.mettingCreate.mettingtitle"));
	// members
	API_DTO_FIELD_DEFAULT(String, member,		ZH_WORDS_GETTER("metting.mettingCreate.members"));
	// hoster
	API_DTO_FIELD_DEFAULT(String, hoster,		ZH_WORDS_GETTER("metting.mettingCreate.hoster"));
	// department
	API_DTO_FIELD_DEFAULT(String, department,	ZH_WORDS_GETTER("metting.mettingCreate.department"));
	// description
	API_DTO_FIELD_DEFAULT(String, description, ZH_WORDS_GETTER("metting.mettingCreate.description"));
};

/**
 * 定义一个用户信息分页传输对象
 */
class MettingCreatePageDTO : public PageDTO<MettingCreateDTO::Wrapper>
{
	DTO_INIT(MettingCreatePageDTO, PageDTO<MettingCreateDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // _MettingCreateDTO_H_