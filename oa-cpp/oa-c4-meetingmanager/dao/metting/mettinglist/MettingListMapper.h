#pragma once

#ifndef _MettingList_MAPPER_
#define _MettingList_MAPPER_

#include "Mapper.h"
#include "../../../domain/do/metting/mettinglist/MettingCreateDO.h"

/**
 * Ê¾Àı±í×Ö¶ÎÆ¥ÅäÓ³Éä
 */
class MettingListMapper : public Mapper<MettingListDO>
{
public:
	MettingListDO mapper(ResultSet* resultSet) const override
	{
		MettingListDO data;
		data.setDates(resultSet->getString(2));
		data.setNames(resultSet->getString(1));
		data.setTimeend(resultSet->getString(4));
		data.setMtroom(resultSet->getString(6));
		data.setTimestart(resultSet->getString(3));
		data.setTitle(resultSet->getString(5));

		return data;
	}
};

#endif // !_MettingList_MAPPER_