#pragma once

#ifndef _MODIFY_PERSONAL_IDENTITYDAO_
#define _MODIFY_PERSONAL_IDENTITYDAO_
#include "BaseDAO.h"
#include "../../domain/do/modify/org_identitypersonDO.h"

/**
 * 示例表数据库操作实现
 */
class modify_personal_identityDAO : public BaseDAO
{
public:
	// 修改数据
	int update(const org_identitypersonDO& uObj);
};
#endif 

