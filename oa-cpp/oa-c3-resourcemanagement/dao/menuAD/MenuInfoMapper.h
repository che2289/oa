#pragma once

#ifndef _MENUINFO_MAPPER_
#define _MENUINFO_MAPPER_

#include "Mapper.h"
#include "../../domain/do/menuinfo/MenuInfoDO.h"

/**
 * MenuInfo表字段匹配映射
 */
class MenuInfoMapper : public Mapper<MenuInfoDO>
{
public:
	MenuInfoDO mapper(ResultSet* resultSet) const override
	{
		// 按照MenuInfoDO.h文件里的顺序写的
		MenuInfoDO data;
		data.setMenu_Id(resultSet->getString(3));
		data.setMenu_Name(resultSet->getString(2));
		//data.setOrgabbreviation(resultSet->getString(3));
		//data.setOrgicon(resultSet->getString(3));
		//data.setOrgsortingvalue(resultSet->getInt(4));
		//data.setOrgdescription(resultSet->getString(3));
		data.setMenu_Type(resultSet->getInt(3));
		data.setParent_Id(resultSet->getString(3));
		//data.setManager(resultSet->getString(3));
		return data;
	}
};

#endif // !_MENUINFO_MAPPER_