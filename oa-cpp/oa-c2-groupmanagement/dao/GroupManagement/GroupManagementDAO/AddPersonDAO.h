#pragma once

#ifndef _ADDPERSON_DAO_
#define _ADDPERSON_DAO_
#include "BaseDAO.h"
#include "../../../domain/do/put/OrgGroupPersonlistDO.h"

/**
 * 示例表数据库操作实现
 */
class AddPersonDAO : public BaseDAO
{
public:
	// 插入数据
	uint64_t insert(const OrgGroupPersonlistDO& iObj);
};
#endif // !_ADDPERSON_DAO_
