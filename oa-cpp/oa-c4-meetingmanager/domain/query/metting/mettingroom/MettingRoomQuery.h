#pragma once

#ifndef _MettingRoom_QUERY_
#define _MettingRoom_QUERY_

#include "../../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例分页查询对象
 */
class MettingBuildQuery : public PageQuery
{
	DTO_INIT(MettingBuildQuery, PageQuery);
	
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_MettingRoom_QUERY_