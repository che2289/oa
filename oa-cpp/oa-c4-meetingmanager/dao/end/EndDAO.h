#pragma once

#ifndef _ENDDAO_H_
#define _ENDDAO_H_
#include "BaseDAO.h"
#include "domain/do/end/EndDO.h"
#include "../../service/end/EndService.h"

class EndDAO : public BaseDAO
{
public:

	int updateEnd(const EndDO& eDO);
};

#endif // !_ENDDAO_H_