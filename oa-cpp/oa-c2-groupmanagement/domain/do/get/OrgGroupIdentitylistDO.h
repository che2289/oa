#pragma once

#ifndef _ORGGROUPIDENTITYLIST_DO_
#define _ORGGROUPIDENTITYLIST_DO_
//#include "../DoInclude.h"
#include "../../../Macros.h"

/**
 * 数据库实体类
 */
class OrgGroupIdentitylistDO
{
	// 群组标识
	CC_SYNTHESIZE(string,GROUP_XID, Group_xid);
	// 身份成员标识
	CC_SYNTHESIZE(string ,xidentityList, Xidentity_list);
	// 在表中出现的位置
	CC_SYNTHESIZE(int, xorderColumn, Xorder_column);
public:
	OrgGroupIdentitylistDO() {
		GROUP_XID = "";
		xidentityList = "";
		xorderColumn = -1;
	}
};

#endif // !_ORGGROUPIDENTITYLIST_DO_
