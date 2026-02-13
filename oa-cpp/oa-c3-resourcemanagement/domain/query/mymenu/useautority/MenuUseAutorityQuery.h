#pragma once

#ifndef _MENUUSEAUTORITY_QUERY_
#define _MENUUSEAUTORITY_QUERY_

#include "../../../GlobalInclude.h"
#include "domain/query/PageQuery.h"


#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例分页查询对象
 */
class MenuUseAutorityQuery : public PageQuery
{
	DTO_INIT(MenuUseAutorityQuery, PageQuery);
	// 角色工号
	API_DTO_FIELD_DEFAULT(String, role_id, ZH_WORDS_GETTER("suixin.usepower.role_id"));
	//菜单权限
	API_DTO_FIELD_DEFAULT(String, menulist, ZH_WORDS_GETTER("suixin.usepower.menulist"));
	// 排序号(可选)
	API_DTO_FIELD_DEFAULT(Int32, xorderColumn, ZH_WORDS_GETTER("suixin.usepower.xorderColumn"));
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_QUERY_