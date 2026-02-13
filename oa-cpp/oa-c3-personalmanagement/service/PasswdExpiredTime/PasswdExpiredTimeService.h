#pragma once

#ifndef _PASSWDEXPIREDTIMESERVICE_H_
#define _PASSWDEXPIREDTIMESERVICE_H_

#include "stdafx.h"
#include "ApiHelper.h"
#include "domain/do/org_personDo/org_personDO.h"
#include "domain/query/PasswdExpiredTime/PasswdExpiredTimeQuery.h"
#include "domain/dto/PasswdExpiredTime/PasswdExpiredTimeDTO.h"

class PasswdExpiredTimeService {
public:
	std::string setPasswdExpiredTime(const PasswdExpiredTimeQuery::Wrapper& query);
};


#endif // !_PASSWDEXPIREDTIMESERVICE_H_