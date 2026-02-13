#pragma once

#ifndef _DISABLEUNBANPERSON_MAPPER_
#define _DISABLEUNBANPERSON_MAPPER_

#include "Mapper.h"
#include "../../domain/do/org_personDo/org_personDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class ChangePersonProfileMapper : public Mapper<org_personDO>
{
public:
	org_personDO mapper(ResultSet* resultSet) const override
	{
		org_personDO data;
		data.setXid(resultSet->getString(1));
		data.setXicon(resultSet->getString(2));
		data.setXiconLdpi(resultSet->getString(3));
		data.setXiconMdpi(resultSet->getString(4));
		return data;
	}
};

#endif // !_SAMPLE_MAPPER_