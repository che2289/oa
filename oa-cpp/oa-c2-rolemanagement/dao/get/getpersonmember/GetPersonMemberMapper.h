#pragma once
#ifndef _GETPERSONMEMBER_MAPPER_
#define _GETPERSONMEMBER_MAPPER_

#include "Mapper.h"
#include "domain/do/get/getpersonmember/GetPersonMemberDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class GetPersonMemberMapper : public Mapper<GetPersonMemberDO>
{
public:
	GetPersonMemberDO mapper(ResultSet* resultSet) const override
	{
		GetPersonMemberDO data;
		data.setROLE_XID(resultSet->getString(1));
		data.setXgroupList(resultSet->getString(2));
		data.setXorderColumn(resultSet->getUInt64(3));
		return data;
	}
};

#endif // !_GETPERSONMEMBER_MAPPER_