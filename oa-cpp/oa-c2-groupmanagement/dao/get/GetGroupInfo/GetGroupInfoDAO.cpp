#include "stdafx.h"
#include "GetGroupInfoDAO.h"
#include "GetGroupInfoMapper.h"
#include <sstream>
#include "../../../domain/do/groupmanagement/OrgGroupDO.h"





std::list<OrgGroupDO> GetGroupInfoDAO::selectByName(const string& name)
{
	string sql = "SELECT xname, xid, xdescription, xcreateTime, xupdateTime FROM org_group WHERE xname LIKE CONCAT('%',?,'%')";
	GetGroupInfoMapper mapper;
	return sqlSession->executeQuery<OrgGroupDO, GetGroupInfoMapper>(sql, mapper, "%s", name);
}

std::list<OrgGroupDO> GetGroupInfoDAO::selectById(const string& id)
{
	string sql = "SELECT xname, xid, xdescription, xcreateTime, xupdateTime FROM org_group WHERE xid = ?";
	GetGroupInfoMapper mapper;
	return sqlSession->executeQuery<OrgGroupDO, GetGroupInfoMapper>(sql, mapper, "%s", id);
}