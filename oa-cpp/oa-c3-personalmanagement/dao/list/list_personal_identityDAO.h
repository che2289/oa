#pragma once

#ifndef _LIST_PERSONAL_IDENTITYDAO_
#define _LIST_PERSONAL_IDENTITYDAO_

#include<BaseDAO.h>

#include "../../domain/do/list/org_identityDO.h"
#include "../../domain/query/list/list_personal_identityQuery.h"

class list_personal_identityDAO : public BaseDAO
{
public:
	// 统计数据条数
	uint64_t count(const list_personal_identityQuery::Wrapper& query);
	// 分页查询数据
	list<org_identityDO> selectWithPage(const list_personal_identityQuery::Wrapper& query);
	// 通过姓名查询数据
	list<org_identityDO> selectByName(const string& name);
};




#endif // !_LIST_PERSONAL_IDENTITYDAO_
