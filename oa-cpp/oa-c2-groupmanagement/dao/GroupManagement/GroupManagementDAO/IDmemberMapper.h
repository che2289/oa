#pragma once

#ifndef _IDMEMBER_MAPPER_
#define _IDMEMBER_MAPPER_

#include "Mapper.h"
//#include "../../../domain/do/get/OrgGroupIdentitylistDO.h"
#include "../../../domain/do/get/IDmemberDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class IDmemberMapper : public Mapper<IDmemberDO>
{
public:
	IDmemberDO mapper(ResultSet* resultSet) const override
	{
		IDmemberDO data;
		data.setGroup_xid(resultSet->getString(1));
		data.setXname(resultSet->getString(2));
		data.setXunit_level_name(resultSet->getString(3));
		data.setXidentityList(resultSet->getString(4));
		return data;
	}
};

#endif // !_IDMEMBER_MAPPER_