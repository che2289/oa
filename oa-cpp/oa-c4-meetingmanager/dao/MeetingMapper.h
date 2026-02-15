#pragma once

#ifndef _SAMPLE_MAPPER_
#define _SAMPLE_MAPPER_

#include "Mapper.h"
#include"../domain/do/MeetingDO.h"

/**
 * Ê¾Àý±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class MeetingTimeMapper : public Mapper<MeetingDO>
{
public:
	MeetingDO mapper(ResultSet* resultSet) const override
	{
		MeetingDO data;
		data.setStartTime(resultSet->getString(1));
		data.setCompletedTime(resultSet->getString(2));
		return data;
	}
};

#endif // !_SAMPLE_MAPPER_