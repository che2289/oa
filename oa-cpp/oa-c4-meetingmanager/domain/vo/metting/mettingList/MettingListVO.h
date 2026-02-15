#pragma once

#ifndef _MettingListVO_H_
#define _MettingListVO_H_

#include "../../../GlobalInclude.h"
#include "domain/dto/metting/mettinglist/MettingListDTO.h" //不知道是否有问题

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 定义一个用户信息显示JsonVO对象，用于响应给客户端
 */
class MettingListJsonVO : public JsonVO<MettingListDTO::Wrapper>
{
	DTO_INIT(MettingListJsonVO, JsonVO<MettingListDTO::Wrapper>);

	// 申请人
	//API_DTO_FIELD_DEFAULT(String, name, ZH_WORDS_GETTER("query.metting.mettingList.applyname"));

	// 日期
	//API_DTO_FIELD_DEFAULT(String, date1, ZH_WORDS_GETTER("query.metting.mettingList.date"));

	// starttime
	//API_DTO_FIELD_DEFAULT(String, timestart, ZH_WORDS_GETTER("query.metting.mettingList.timestart"));

	// endtime
	//API_DTO_FIELD_DEFAULT(String, timeend, ZH_WORDS_GETTER("query.metting.mettingList.timeend"));

	// 标题
	//API_DTO_FIELD_DEFAULT(String, title1, ZH_WORDS_GETTER("query.metting.mettingList.title"));

	// 会议室
	//API_DTO_FIELD_DEFAULT(String, mettingroom, ZH_WORDS_GETTER("query.metting.mettingList.metting"));
};

/**
 * 定义一个用户信息分页显示JsonVO对象，用于响应给客户端
 */
class MettingListPageJsonVO : public JsonVO<MettingListPageDTO::Wrapper>
{
	DTO_INIT(MettingListPageJsonVO, JsonVO<MettingListPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // _MettingListVO_H_