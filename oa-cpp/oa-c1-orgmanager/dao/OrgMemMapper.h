#pragma once

#ifndef _ORGMEM_MAPPER_
#define _ORGMEM_MAPPER_

#include "Mapper.h"
#include "../domain/do/OrgMemDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class OrgMemMapper : public Mapper<OrgMemDO>
{
public:
	OrgMemDO mapper(ResultSet* resultSet) const override
	{
		OrgMemDO data;
		data.setId(resultSet->getUInt64(1));
		data.setName(resultSet->getString(2));
		data.setSex(resultSet->getString(3));
		data.setAge(resultSet->getInt(4));
		return data;
	}
};

#endif // !_SAMPLE_MAPPER_