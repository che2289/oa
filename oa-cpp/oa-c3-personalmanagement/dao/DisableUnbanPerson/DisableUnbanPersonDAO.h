#pragma once

#ifndef _DISABLEUNBANPERSON_DAO_
#define _DISABLEUNBANPERSON_DAO_
#include "BaseDAO.h"
#include "../../domain/do/org_personDo/org_personDO.h"

/**
 * 示例表数据库操作实现
 */
class DisableUnbanPersonDAO : public BaseDAO
{
public:

	// 修改数据
	int update(const org_personDO& uObj);

};
#endif // !_SAMPLE_DAO_
