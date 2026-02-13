#pragma once

#ifndef _MODIFY_PERSONAL_IDENTITYMAPPER_
#define _MODIFY_PERSONAL_IDENTITYMAPPER_

#include "Mapper.h"
#include "../../domain/do/modify/org_identitypersonDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class modify_personal_identityMapper : public Mapper<org_identitypersonDO>
{
public:
	org_identitypersonDO mapper(ResultSet* resultSet) const override
	{
		org_identitypersonDO data;
		data.setXid(resultSet->getString(""));
		data.setXname(resultSet->getString(""));
		data.setXmajor(resultSet->getBoolean(0));
		return data;
	}
};

#endif 
