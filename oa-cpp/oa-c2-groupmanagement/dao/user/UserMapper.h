#pragma once
#ifndef _USER_MAPPER_
#define _USER_MAPPER_

#include "Mapper.h"
#include <domain/do/get/UserDO.h>

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class UserMapper : public Mapper<UserDO>
{
public:
	UserDO mapper(ResultSet* resultSet) const override
	{
		UserDO data;
		data.setGROUP_XID(resultSet->getString(1));
		data.setXorderNumber(resultSet->getInt(2));
		data.setXname(resultSet->getString(3));
		data.setXmobile(resultSet->getString(4));
		data.setXmail(resultSet->getString(5));
		return data;
	}
};

#endif // !_USER_MAPPER_