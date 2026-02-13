#pragma once

#ifndef _ATTRIB_MAPPER_
#define _ATTRIB_MAPPER_

#include "Mapper.h"
#include "../../domain/do/Attrib/AttribDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class AttribMapper : public Mapper<AttribDO>
{
public:
	AttribDO mapper(ResultSet* resultSet) const override
	{
		AttribDO data;
		data.setId(resultSet->getUInt64(1));
		data.setName(resultSet->getString(2));
		data.setShuxing(resultSet->getString(3));
		data.setValue(resultSet->getInt(4));
		data.setMiaoshu(resultSet->getString(5));
		return data;
	}
};

#endif // !_SAMPLE_MAPPER_