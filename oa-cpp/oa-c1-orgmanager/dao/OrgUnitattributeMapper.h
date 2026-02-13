#pragma once

#ifndef _ORGUNITATTRIBUTE_MAPPER_
#define _ORGUNITATTRIBUTE_MAPPER_

#include "Mapper.h"
#include "domain/do/OrgUnitattributeDO.h"

/**
 * 示例表字段匹配映射
 */
class OrgUnitattributeMapper : public Mapper<OrgUnitattributeDO>
{
public:
	OrgUnitattributeDO mapper(ResultSet* resultSet) const override
	{
		OrgUnitattributeDO data;
		data.setXid(resultSet->getString(1));
        data.setXid(resultSet->getString(1));
        data.setXcreateTime(resultSet->getString(2));
        data.setXsequence(resultSet->getString(3));
        data.setXupdateTime(resultSet->getString(4));
        data.setXdistributeFactor(resultSet->getInt(5));
        data.setXdescription(resultSet->getString(6));
        data.setXdistinguishedName(resultSet->getString(7));
        data.setXname(resultSet->getString(8));
        data.setXorderNumber(resultSet->getInt(9));
        data.setXpinyin(resultSet->getString(10));
        data.setXpinyinInitial(resultSet->getString(11));
        data.setXunique(resultSet->getString(12));
        data.setXunit(resultSet->getString(13));
		return data;
	}
};

#endif // !_ORGUNITATTRIBUTE_MAPPER_