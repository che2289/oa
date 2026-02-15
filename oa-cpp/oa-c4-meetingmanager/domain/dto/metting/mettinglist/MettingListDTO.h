#pragma once

#ifndef _MettingList_DTO_
#define _MettingList_DTO_
#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class MettingListDTO : public oatpp::DTO
{
	DTO_INIT(MettingListDTO, DTO);

	// 申请人
	API_DTO_FIELD_DEFAULT(String, name, ZH_WORDS_GETTER("query.metting.mettingList.applyname"));

	// 日期
	API_DTO_FIELD_DEFAULT(String, date1, ZH_WORDS_GETTER("query.metting.mettingList.date"));

	// starttime
	API_DTO_FIELD_DEFAULT(String, timestart, ZH_WORDS_GETTER("query.metting.mettingList.timestart"));

	// endtime
	API_DTO_FIELD_DEFAULT(String, timeend, ZH_WORDS_GETTER("query.metting.mettingList.timeend"));

	// 标题
	API_DTO_FIELD_DEFAULT(String, title1, ZH_WORDS_GETTER("query.metting.mettingList.title"));

	// 会议室
	API_DTO_FIELD_DEFAULT(String, mettingroom, ZH_WORDS_GETTER("query.metting.mettingList.metting"));
};

/**
 * 示例分页传输对象
 */
class MettingListPageDTO : public PageDTO<MettingListDTO::Wrapper>
{
	DTO_INIT(MettingListPageDTO, PageDTO<MettingListDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_MettingList_DTO_