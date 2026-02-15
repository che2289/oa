#pragma once

#ifndef _GROUPIDENTITYLISTMAPPER_H_
#define _GROUPIDENTITYLISTMAPPER_H_

#include "Mapper.h"


class GroupIdentityListMapper : public Mapper<oatpp::String>
{
public:
	oatpp::String mapper(ResultSet* resultSet) const override
	{
		oatpp::String data = resultSet->getString(1).c_str();
		return data;
	}
};


#endif // !_GROUPIDENTITYLISTMAPPER_H_
