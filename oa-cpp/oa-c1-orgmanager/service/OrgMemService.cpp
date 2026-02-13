
#include "stdafx.h"
#include "OrgMemService.h"
#include "../dao/OrgMemDAO.h"

bool OrgMemService::addData(string orgID, string personID)
{
	// 组装DO数据
	OrgMemDO data;
	// 执行数据添加
	OrgJobDAO dao;
	return dao.add(orgID, personID);
}
bool OrgMemService::removeData(string orgID, string personID)
{
	OrgMemDAO dao;
	return dao.deleteById(orgID,personID) == 1;
}
bool OrgJobService::removeData(string personID, string dutyID)
{
	OrgJobDAO dao;
	return dao.deleteById(personID,dutyID) == 1;
}
bool OrgJobService::addData(string personID, string dutyID) {
	// 组装DO数据
	OrgMemDO data;
		// 执行数据添加
		OrgJobDAO dao;
	return dao.add(personID,dutyID);
}
