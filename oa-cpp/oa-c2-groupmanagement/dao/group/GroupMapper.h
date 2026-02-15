#pragma once
#ifndef _GROUP_MAPPER_
#define _GROUP_MAPPER_

#include "Mapper.h"
#include "../../domain/do/put/GroupDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class GroupMapper : public Mapper<GroupDO>
{
public:
	GroupDO mapper(ResultSet* resultSet) const override
	{
		GroupDO data;
		data.setXid(resultSet->getString(1));
		data.setXname(resultSet->getString(2));
		data.setXdescription(resultSet->getString(3));
		return data;
	}
};

#endif // !_GROUP_MAPPER_