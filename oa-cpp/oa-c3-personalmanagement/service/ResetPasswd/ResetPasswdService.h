#pragma once

#ifndef _RESETPASSWDSERVICE_H_
#define _RESETPASSWDSERVICE_H_

#include "stdafx.h"
#include "domain/query/ResetPasswd/ResetPasswdQuery.h"

class ResetPasswdService {
public:
	int32_t updateResetPasswd(const ResetPasswdQuery::Wrapper& query);
};

#endif // !_RESETPASSWDSERVICE_H_