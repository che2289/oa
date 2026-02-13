#pragma once

#ifndef _MENUINFO_MAPPER_
#define _MENUINFO_MAPPER_

#include "Mapper.h"
#include "../../../domain/do/menuinfo/MenuInfoDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class MenuInfoMapper : public Mapper<MenuInfoDO>
{
public:
	MenuInfoDO mapper(ResultSet* resultSet) const override
	{
		MenuInfoDO data;
		//data.setId(resultSet->getUInt64(1));
		//data.setName(resultSet->getString(2));
		//data.setSex(resultSet->getString(3));
		//data.setAge(resultSet->getInt(4));
		data.setMenu_Id(resultSet->getString(1));
		data.setMenu_Name(resultSet->getString(2));
		data.setParent_Id(resultSet->getString(3));
		data.setLevel(resultSet->getUInt64(4));
		data.setIcon(resultSet->getString(5));

		
		
		return data;
	}
};

#endif // !_SAMPLE_MAPPER_