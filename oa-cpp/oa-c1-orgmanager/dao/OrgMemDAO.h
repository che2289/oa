#pragma once

#ifndef _ORGMEM_DAO_
#define _ORGMEM_DAO_
#include "BaseDAO.h"
#include "../domain/do/OrgMemDO.h"
#include "../domain/dto/OrgMemDTO.h"

/**
 * 示例表数据库操作实现
 */
class OrgMemDAO : public BaseDAO
{
public:
	// 删除组织成员（批量）
	int deleteById(string orgID,string personID);
};
class OrgJobDAO : public BaseDAO
{
public:
	// 删除职务成员
	int deleteById(string personID, string dutyID);
	//添加职务成员
	int add(string personID, string dutyID);
};
#endif // !_ORGMEM_DAO_
