#pragma once

#ifndef _MODIFY_LOCKORUNLOCK_OFFICERDAO_
#define _MODIFY_LOCKORUNLOCK_OFFICERDAO_

#include "BaseDAO.h"

#include "domain/do/org_personDo/org_personDO.h"

class modify_lockorunlock_officerDAO : public BaseDAO
{
public:
	int update(const org_personDO& uObj);
};

#endif // !_MODIFY_LOCKORUNLOCK_OFFICERDAO_
