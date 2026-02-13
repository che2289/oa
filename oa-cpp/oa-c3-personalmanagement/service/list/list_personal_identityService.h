#pragma once

#ifndef _LIST_PERSONAL_IDENTITYSERVICE_
#define _LIST_PERSONAL_IDENTITYSERVICE_

#include<list>

#include "../../domain/dto/list/list_personal_identityDTO.h"

#include "../../domain/query/list/list_personal_identityQuery.h"

class list_personal_identityService
{
public:
	// 分页查询所有数据
	listPageDTO::Wrapper listAll(const list_personal_identityQuery::Wrapper& query);
};

#endif // !_LIST_PERSONAL_IDENTITYSERVICE_
