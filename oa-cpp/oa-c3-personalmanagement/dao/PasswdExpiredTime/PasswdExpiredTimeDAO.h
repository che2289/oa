#pragma once

#ifndef _PASSWDEXPIREDTIMEDAO_H_
#define _PASSWDEXPIREDTIMEDAO_H_

#include "stdafx.h"
#include "BaseDAO.h"
#include "domain/do/org_personDo/org_personDO.h"

class PasswdExpiredTimeDAO : public BaseDAO {
public:
	int updatePasswdExpiredTime(const org_personDO& _do);
};

#endif // !_PASSWDEXPIREDTIMEDAO_H_