#pragma once

#ifndef _ADDPERSON_MAPPER_
#define _ADDPERSON_MAPPER_

#include "Mapper.h"
#include "../../../domain/do/put/OrgGroupPersonlistDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class AddPersonMapper : public Mapper<OrgGroupPersonlistDO>
{
public:
	OrgGroupPersonlistDO mapper(ResultSet* resultSet) const override
	{
		OrgGroupPersonlistDO data;
		data.setGroup_person(resultSet->getString(1));
		return data;
	}
};

#endif // !_ADDPERSON_MAPPER_