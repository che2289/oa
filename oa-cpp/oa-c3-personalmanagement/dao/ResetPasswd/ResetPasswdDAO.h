#pragma once

#ifndef _RESETPASSWDDAO_H_
#define _RESETPASSWDDAO_H_

#include "stdafx.h"
#include "BaseDAO.h"
#include "domain/do/org_personDo/org_personDO.h"

class ResetPasswdDAO : public BaseDAO {
public:
	int32_t updateResetPasswd(const org_personDO& _do);
};

#endif // !_RESETPASSWDDAO_H_