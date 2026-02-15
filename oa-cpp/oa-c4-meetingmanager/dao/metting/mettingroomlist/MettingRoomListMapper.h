#pragma once

#ifndef _MettingRoom_MAPPER_
#define _MettingRoom_MAPPER_

#include "Mapper.h"
#include "../../../domain/do/metting/mettingroomlist/MettingRoomListDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class MettingRoomListMapper : public Mapper<MettingRoomListDO>
{
public:
	MettingRoomListDO mapper(ResultSet* resultSet) const override
	{
		MettingRoomListDO data;
		data.setIds(resultSet->getString(1));
		data.setNames(resultSet->getString(8));
		data.setBuild(resultSet->getString(4));
		data.setFloor(resultSet->getInt(7));
		data.setcapacity(resultSet->getInt(5));
		data.setRoomnumber(resultSet->getString(9));
		data.setDis(resultSet->getInt(2));
		data.setDevice(resultSet->getString(6));
		data.setAvailable(resultSet->getBlob(3));
		data.setMeetings(resultSet->getString(10));
		return data;
	}
};



#endif // !_MettingRoomList_MAPPER_