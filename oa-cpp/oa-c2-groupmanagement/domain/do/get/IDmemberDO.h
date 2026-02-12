#pragma once
/*
 @Author: LemonFlavoredSoda
 @Date: 2024年 10月 23日 星期三 23:19:41 CST
*/
//视图DO
#ifndef _IDMEMBERDO_DO_
#define _IDMEMBERDO_DO_
#include "../../../Macros.h"

/**
 * 示例数据库实体类
 */
class IDmemberDO
{

	// 编号
	//CC_SYNTHESIZE(uint64_t, id, Id);
	//群组标识
	CC_SYNTHESIZE(string, GROUP_XID, Group_xid);
	//姓名
	CC_SYNTHESIZE(string, xname, Xname);
	//层级名称
	CC_SYNTHESIZE(string, xunitLevelName, Xunit_level_name);
	//层级名称
	CC_SYNTHESIZE(string, xidentityList, XidentityList);
public:
	IDmemberDO() {
		xname = "";
		xunitLevelName = "";
		GROUP_XID = "";
		xidentityList = "";
	}
};

#endif // !_IDMEMBERDO_DO_
