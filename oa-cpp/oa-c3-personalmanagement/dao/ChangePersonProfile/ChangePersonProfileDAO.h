#pragma once

#ifndef _CHANGEPERSONPROFILE_DAO_
#define _CHANGEPERSONPROFILE_DAO_
#include "BaseDAO.h"
#include "../../domain/do/org_personDo/org_personDO.h"

/**
 * 示例表数据库操作实现
 */
class ChangePersonProfileDAO : public BaseDAO
{
public:

	// 修改数据
	int update(const org_personDO& uObj);

};
#endif // !_SAMPLE_DAO_
