#pragma once

#ifndef _ORGSTRUCT_DAO_
#define _ORGSTRUCT_DAO_
#include "BaseDAO.h"
#include "../../domain/do/OrgStructDO/OrgStructDO.h"
#include "../../domain/query/OrgStructQuery/OrgStructQuery.h"


/**
 * 示例表数据库操作实现
 */
class OrgStructDao : public BaseDAO
{
public:
	// 分页查询数据
	list<OrgStructDO> selectWithPage(const OrgStructPageQuery::Wrapper& query);

};

class OrgStaffDao : public BaseDAO
{
public:
	// 分页查询数据 (条件查询)
	list<OrgStructDO> selectWithPage(const OrgStaffPageQuery::Wrapper& query);
	
	int deleteById(std::string xemployee);
};
#endif // !_ORGSTRUCT_DAO_
