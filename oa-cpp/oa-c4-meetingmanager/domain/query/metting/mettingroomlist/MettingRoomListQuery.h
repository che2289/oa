#pragma once

#ifndef _MettingRoomList_QUERY_
#define _MettingRoomList_QUERY_

#include "../../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例分页查询对象
 */
class MettingRoomListQuery : public PageQuery
{
	DTO_INIT(MettingRoomListQuery, PageQuery);
	// date-time
	API_DTO_FIELD_DEFAULT(String, date1, ZH_WORDS_GETTER("mettingroom.date"));
	// time
	API_DTO_FIELD_DEFAULT(String, time1, ZH_WORDS_GETTER("mettingroom.time"));
	// build
	API_DTO_FIELD_DEFAULT(String, build, ZH_WORDS_GETTER("mettingroom.build"));
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_MettingRoomList_QUERY_