#pragma once

#ifndef _GROUPLISTQUERY_H_
#define _GROUPLISTQUERY_H_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例分页查询对象
 */
class GroupListQuery : public PageQuery
{
	DTO_INIT(GroupListQuery, PageQuery);
	// 唯一编码
	DTO_FIELD(String, id);
	DTO_FIELD_INFO(id) {
		info->description = ZH_WORDS_GETTER("grouplist.field.id");
	}
	// 组名
	DTO_FIELD(String, name);
	DTO_FIELD_INFO(name) {
		info->description = ZH_WORDS_GETTER("grouplist.field.name");
	}

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_QUERY_
