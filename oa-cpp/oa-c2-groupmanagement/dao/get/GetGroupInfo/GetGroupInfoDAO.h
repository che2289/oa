#pragma once

#ifndef _GETGROUPINFODAO_H_
#define _GETGROUPINFODAO_H_
#include "BaseDAO.h"
//#include "../../../domain/query/get/GetGroupInfo/GetGroupInfoQuery.h"
#include "../../../domain/do/groupmanagement/OrgGroupDO.h"

class GetGroupInfoDAO : public BaseDAO
{
public:
	// 统计数据条数
	//uint64_t count(const GetGroupInfoQuery::Wrapper& query);

	// 通过姓名查询数据
	list<OrgGroupDO> selectByName(const string& name);
	// 通过id查询数据
	list<OrgGroupDO> selectById(const string& id);

};

#endif // !_GETGROUPINFODAO_H_