#pragma once

#ifndef _MENUUSEAUTORITY_MAPPER_
#define _MENUUSEAUTORITY_MAPPER_

#include "Mapper.h"
#include "../../../domain/do/org_role_menulistDO/org_role_menulistDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class MenuUseAutorityMapper : public Mapper<Org_role_menulistDO>
{
public:
	Org_role_menulistDO mapper(ResultSet* resultSet) const override
	{
		Org_role_menulistDO data;
		//data.setId(resultSet->getUInt64(1));
		//data.setName(resultSet->getString(2));
		//data.setSex(resultSet->getString(3));
		//data.setAge(resultSet->getInt(4));
		data.setrole_Id(resultSet->getString(1));
		data.setMenulist(resultSet->getString(2));
		data.setXorderColumn(resultSet->getInt(3));
		
		
		return data;
	}
};

#endif // !_SAMPLE_MAPPER_