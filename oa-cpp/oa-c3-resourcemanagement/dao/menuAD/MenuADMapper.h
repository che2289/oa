#pragma once

#ifndef _SAMPLE_MAPPER_
#define _SAMPLE_MAPPER_

#include "Mapper.h"
#include "../../domain/do/menuinfo/MenuInfoDO.h"
/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class MenuADMapper : public Mapper<MenuInfoDO>
{
public:
	MenuInfoDO mapper(ResultSet* resultSet) const override
	{
		MenuInfoDO data;
		data.setMenu_Id(resultSet->getString(1));
		return data;
	}
};

#endif // !_SAMPLE_MAPPER_