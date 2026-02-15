#pragma once

#ifndef _ROOMPOSDAO_H_
#define _ROOMPOSDAO_H_
#include "BaseDAO.h"
#include "domain/do/room-new/RoomPosDO.h"
#include "../../service/room/RoomPosService.h"

class RoomPosDAO : public BaseDAO
{
public:

	int updateById(const RoomBuildingDO& uobj);
	int updateByName(const string& xname);
	int deleteById(const string& id);
	int deleteByName(const string& name);
};

#endif // !_ROOMPOSDAO_H_