#pragma once

#ifndef _ORGUNITATTRIBUTE_DAO_
#define _ORGUNITATTRIBUTE_DAO_
#include "BaseDAO.h"
#include "domain/do/OrgUnitattributeDO.h"
#include "domain/query/OrgUnitattributeQuery.h"

class OrgUnitattributeDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const OrgUnitattributeQuery::Wrapper& query);
	// 分页查询数据
	list<OrgUnitattributeDO> selectWithPage(const OrgUnitattributeQuery::Wrapper& query);
	//// 通过姓名查询数据
	//list<OrgUnitattributeDO> selectByName(const string& name);
	//// 插入数据
	//uint64_t insert(const OrgUnitattributeDO& iObj);
	//// 修改数据
	//int update(const OrgUnitattributeDO& uObj);
	// 通过ID删除数据
	int deleteById(string id);
};

#endif // !_ORGUNITATTRIBUTE_DAO_