#pragma once

#ifndef _IDMEMBER_MAPPER_
#define _IDMEMBER_MAPPER_

#include "Mapper.h"
//#include "../../../domain/do/get/OrgGroupIdentitylistDO.h"
#include "../../../domain/do/get/IDmemberDO.h"

/**
 * ◊÷∂Œ∆•≈‰”≥…‰
 */
class IDmemberMapper : public Mapper<IDmemberDO>
{
public:
	IDmemberDO mapper(ResultSet* resultSet) const override
	{
		IDmemberDO data;
		data.setXname(resultSet->getString(1));
		data.setXunit_level_name(resultSet->getString(2));
		//data.setXorder_column(resultSet->getInt(3));
		return data;
	}
};

#endif // !_IDMEMBER_MAPPER_