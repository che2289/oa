#pragma once

#ifndef _MYMENUINFO_QUERY_
#define _MYMENUINFO_QUERY_
#include "../../../GlobalInclude.h"
#include "tree/TreeNode.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class MyMenuInfoQuery : public PageQuery
{
	DTO_INIT(MyMenuInfoQuery, PageQuery);

	// 编号
	API_DTO_FIELD_DEFAULT(String, menu_id, ZH_WORDS_GETTER("suixin.menuinfo.menu_id"));
	// 组织名称
	API_DTO_FIELD_DEFAULT(String, menu_name, ZH_WORDS_GETTER("suixin.menuinfo.menu_name"));
	//上级组织
	API_DTO_FIELD_DEFAULT(String, parent_id, ZH_WORDS_GETTER("suixin.menuinfo.parent_id"));
	//所在层数，用于快速查询同层结点 
	API_DTO_FIELD_DEFAULT(Int64, level, ZH_WORDS_GETTER("suixin.menuinfo.level"));
	/*图片*/
	API_DTO_FIELD_DEFAULT(String, icon, ZH_WORDS_GETTER("suixin.menuinfo.icon"));
};


#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_DTO_