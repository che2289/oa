#pragma once

#ifndef _ORGSTRUCT_MAPPER_
#define _ORGSTRUCT_MAPPER_

#include "Mapper.h"
#include "../../domain/do/OrgStructDO/OrgStructDO.h"

/**
 * 示例表字段匹配映射
 */
class OrgStructMapper : public Mapper<OrgStructDO>
{
public:
	OrgStructDO mapper(ResultSet* resultSet) const override
	{
		OrgStructDO data;
		//data.setPageIndex(resultSet->getUInt64(1));
		//data.setPageSize(resultSet->getUInt64(1));
		data.setXdistinguishedName(resultSet->getString(1));
		data.setXemployee(resultSet->getString(2));
		data.setXmail(resultSet->getString(3));
		data.setXmobile(resultSet->getString(4));
		data.setXunique(resultSet->getString(5));
		data.setXiconLdpi(resultSet->getString(6));
		data.setXname(resultSet->getString(7));
		data.setXid(resultSet->getString(8));
		return data;
	}
};


class OrgStaffMapper : public Mapper<OrgStructDO>
{
public:
	OrgStructDO mapper(ResultSet* resultSet) const override
	{
		OrgStructDO data;
		//查询个人信息
		data.setXdistinguishedName(resultSet->getString(1));
		//查询电话
		data.setXmobile(resultSet->getString(2));
		return data;
	}
};


#endif // !_ORGSTRUCT_MAPPER_