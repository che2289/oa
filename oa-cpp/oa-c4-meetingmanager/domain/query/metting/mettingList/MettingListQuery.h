#pragma once

#ifndef _MettingList_QUERY_
#define _MettingList_QUERY_

#include "../../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 分页查询对象
 */
class MettingListQuery : public PageQuery
{
	DTO_INIT(MettingListQuery, PageQuery);
	// 用户唯一标识
	API_DTO_FIELD_DEFAULT(String, name, ZH_WORDS_GETTER("query.metting.mettingList.name"));

	// reject
	API_DTO_FIELD_DEFAULT(Boolean, reject, ZH_WORDS_GETTER("query.metting.mettingList.reject"));

	// invite
	API_DTO_FIELD_DEFAULT(Boolean, mtinvite, ZH_WORDS_GETTER("query.metting.mettingList.invite"));
	
	// time
	API_DTO_FIELD_DEFAULT(UInt64, time, ZH_WORDS_GETTER("query.metting.mettingList.time"));

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_MettingList_QUERY_