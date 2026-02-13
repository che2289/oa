#pragma once

#ifndef _GETGROUPINFODAO_H_
#define _GETGROUPINFODAO_H_
#include "BaseDAO.h"

#include "../../../domain/do/groupmanagement/OrgGroupDO.h"

class GetGroupInfoDAO : public BaseDAO
{
public:

	// 通过姓名查询数据
	list<OrgGroupDO> selectByName(const string& name);
	// 通过id查询数据
	list<OrgGroupDO> selectById(const string& id);

};

#endif // !_GETGROUPINFODAO_H_