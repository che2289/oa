#pragma once

#ifndef _GROUPLIST_MAPPER_
#define _GROUPLIST_MAPPER_


#include "Mapper.h"
#include "../../domain/do/get/GroupListDO.h"


/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class GroupListMapper : public Mapper<GroupListDO>
{
public:
	GroupListDO mapper(ResultSet* resultSet) const override
	{
		GroupListDO data;
		data.setId(resultSet->getString(1));
		data.setName(resultSet->getString(2));
		data.setDescribe(resultSet->getString(3));
		return data;
	}
};

#endif // !_SAMPLE_MAPPER_