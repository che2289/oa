#pragma once

#ifndef _ORGSTRUCTSERVICE_H_
#define _ORGSTRUCTSERVICE_H_
#include <list>
#include "domain/vo/OrgStructVO/OrgStructVO.h"
#include "domain/query/OrgStructQuery/OrgStructQuery.h"
#include "domain/dto/OrgStructDTO/OrgStructDTO.h"


class OrgStructService
{
public:
	// 分页查询所有数据
	OrgStructPageDTO::Wrapper listAll(const OrgStructPageQuery::Wrapper& query);
};

class OrgStaffService
{
public:
	// 分页查询数据
	OrgStaffPageDTO::Wrapper list(const OrgStaffPageQuery::Wrapper& query);
	// 分页查询所有数据
	OrgStaffPageDTO::Wrapper listAll(const OrgStaffPageQuery::Wrapper& query);
};


class OrgDelectService
{
public:
	// 通过ID删除数据
	bool removeData(const DeleteOrgmeberDTO::Wrapper& condtion);
};

#endif // !_ORGSTRUCTSERVICE_H_

