#pragma once

#ifndef _ORG_MENULISTDO_
#define _ORG_MENULISTDO_
#include "../DoInclude.h"

/**
 * 示例数据库实体类
 */
class org_menulistDO
{
	// 角色工号
	CC_SYNTHESIZE(string, role_id, Role_id);
	// 菜单权限
	CC_SYNTHESIZE(string, menuList, MenuList);
	// 排序号
	CC_SYNTHESIZE(int32_t, xorderColumn, XorderColumn);
public:
	org_menulistDO() {
		role_id = "";
		menuList = "";
		xorderColumn = -1;
	}
};


#endif // !_ORG_MENULISTDO_
