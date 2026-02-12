#ifndef _ROLELIST_MAPPER_
#define _ROLELIST_MAPPER_

#include "Mapper.h"
#include "domain/do/rolemanagement/RoleManagementDO/get/queryrole/QueryRoleDO.h"
#include "domain/do/rolemanagement/RoleManagementDO/put/addrole/AddroleDO.h"

class QueryRoleMapper : public Mapper<OrgRoleNameDO>
{
public:
	OrgRoleNameDO mapper(ResultSet* resultSet) const override
	{
		OrgRoleNameDO data;
		data.setXid(resultSet->getString(1));
		data.setXname(resultSet->getString(2));
		return data;
	}
};

#endif // !_ROLELIST_MAPPER_
