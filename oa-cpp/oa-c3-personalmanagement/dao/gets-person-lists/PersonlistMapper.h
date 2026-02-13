#pragma once

#ifndef _SAMPLE_MAPPER_
#define _SAMPLE_MAPPER_

#include "Mapper.h"
#include "../../domain/do/org_personDo/org_personDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class PersonlistMapper : public Mapper<org_personDO>
{
public:
	org_personDO mapper(ResultSet* resultSet) const override
	{
		org_personDO data;
		data.setXname(resultSet->getString(1));
		data.setXmobile(resultSet->getString(2));
		data.setXicon(resultSet->getString(3));
		data.setXid(resultSet->getString(4));
		data.setXunique(resultSet->getString(5));
		return data;
	}
};

#endif // !_SAMPLE_MAPPER_