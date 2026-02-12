#pragma once
#ifndef _Group_DO_
#define _Group_DO_
#include "../DoInclude.h"

/**
 * 示例数据库实体类
 */
class GroupDO
{
	// 编号
	CC_SYNTHESIZE(string, xid, Xid);
	// 姓名
	CC_SYNTHESIZE(string, xname, Xname);
	// 描述
	CC_SYNTHESIZE(string, xdescription, Xdescription);
public:
	//GruopDO() {}
	/*ModifyDO(string id, string name, string info)
	{
		this->id = id;
		this->name = name;
		this->info = info;
	}*/
	GroupDO() {
		xid = "";
		xname = "";
		xdescription = "";
	}
};

#endif // !_GROUP_DO_
