#pragma once

#ifndef _DUTYSETTINGDAO_H_
#define _DUTYSETTINGDAO_H_
#include "BaseDAO.h"
#include <list>
#include "domain/do/OrgManagement/PersonalManagement/org_identityDO.h"
#include "domain/do/OrgManagement/PersonalManagement/org_unitduty_identitylistDO.h"
#include "domain/dto/OrgManagement/PersonalManagement/DutySettingDTO.h"
/**
 * 示例表数据库操作实现
 */
class DutySettingDAO : public BaseDAO
{
public:
	//解除职务
	int deleteByIdentity(const DutySettingDTO::Wrapper& dto);
	int insert(const list<org_unitduty_identitylistDO>& data);
};
#endif // !_DUTYSETTINGDAO_H_
