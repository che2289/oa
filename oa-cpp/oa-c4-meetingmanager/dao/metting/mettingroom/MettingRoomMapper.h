#pragma once

#ifndef _MettingRoom_MAPPER_
#define _MettingRoom_MAPPER_

#include "Mapper.h"
#include "../../../domain/do/metting/mettingroom/MettingRoomDO.h"

/**
 * ◊÷∂Œ∆•≈‰”≥…‰
 */
class MettingRoomMapper : public Mapper<MettingRoomDO>
{
public:
	MettingRoomDO mapper(ResultSet* resultSet) const override
	{
		MettingRoomDO data;
		data.setIds(resultSet->getString(1));
		data.setNames(resultSet->getString(12));
		data.setBuild(resultSet->getString(8));
		data.setFloor(resultSet->getInt(11));
		data.setcapacity(resultSet->getInt(9));
		data.setRoomnumber(resultSet->getString(17));
		data.setDis(resultSet->getInt(5));
		data.setDevice(resultSet->getString(10));
		data.setAvailable(resultSet->getBlob(7));
		return data;
	}
};

class MettingBuildMapper : public Mapper<MettingBuildDO>
{
public:
	MettingBuildDO mapper(ResultSet* resultSet) const override
	{
		MettingBuildDO data;
		data.setBuild(resultSet->getString(1));
		return data;
	}
};

#endif // !_MettingRoom_MAPPER_