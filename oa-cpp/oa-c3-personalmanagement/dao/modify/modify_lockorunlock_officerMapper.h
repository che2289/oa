#pragma once

#ifndef _MODIFY_LOCKORUNLOCK_OFFICERMAPPER_
#define	_MODIFY_LOCKORUNLOCK_OFFICERMAPPER_
// Mapper
#include "Mapper.h"

#include "domain/do/org_personDo/org_personDO.h"

class modify_lockorunlock_officerMapper : public Mapper<org_personDO>
{
public:
	org_personDO mapper(ResultSet* resultSet) const override
	{
		org_personDO data;
		data.setXid(resultSet->getString(""));
		data.setXlockTime(resultSet->getString(""));
		data.setXstatusDes(resultSet->getString(""));
		data.setXstatus(resultSet->getString(""));


		return data;
	}
};





#endif // !_MODIFY_LOCKORUNLOCK_OFFICERMAPPER_
