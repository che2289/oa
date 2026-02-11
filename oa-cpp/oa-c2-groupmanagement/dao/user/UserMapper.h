#pragma once
#ifndef _USER_MAPPER_
#define _USER_MAPPER_

#include "Mapper.h"
#include <domain/do/get/UserDO.h>

/**
 * ◊÷∂Œ∆•≈‰”≥…‰
 */
class UserMapper : public Mapper<UserDO>
{
public:
	UserDO mapper(ResultSet* resultSet) const override
	{
		UserDO data;
		data.setId(resultSet->getUInt64(1));
		data.setName(resultSet->getString(2));
		data.setPhone(resultSet->getString(3));
		data.setMail(resultSet->getString(4));
		return data;
	}
};

#endif // !_USER_MAPPER_