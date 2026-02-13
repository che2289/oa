#pragma once

#ifndef _LIST_PERSONAL_IDENTITYMAPPER_
#define _LIST_PERSONAL_IDENTITYMAPPER_
#include "Mapper.h"

#include "../../domain/do/list/org_identityDO.h"

class list_personal_identityMapper : public Mapper<org_identityDO>
{
public:
	org_identityDO mapper(ResultSet* resultSet) const override
	{
		//xname, xunitName, xunique, xdistinguishedName, xmajor
		org_identityDO data;
		data.setXname(resultSet->getString(1));
		data.setXunitName(resultSet->getString(2));
		data.setXid(resultSet->getString(3));
		data.setXdistinguishedName(resultSet->getString(4));
		data.setXmajor(resultSet->getBoolean(5));
		return data;
	}
};






#endif // !_LIST_PERSONAL_IDENTITYMAPPER_
