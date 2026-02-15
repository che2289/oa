
#include "stdafx.h"
#include "MeetingRoomService.h"
#include "../../dao/MeetingRoom/MeetingRoomDAO.h"
using namespace oatpp;


bool MeetingRoomService::updateData(const MeetingroomDTO::Wrapper& dto)
{
	// 组装DO数据
	MeetingRoomDO data;
	vector<string>dev;
	for (auto& iter : *dto->device) {
		dev.push_back(iter);
	}
	data.setDevice(dev);
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Id,id,Name, name, Location, location, Floor, floor, Capacity, capacity,Housenumber,housenumber,Extnumber,extnumber,Status,status)
		// 执行数据修改
	MeetingRoomDAO dao;
	return dao.update(data) == 1;
}

bool MeetingRoomService::removeData(const string& name)
{
	MeetingRoomDAO dao;
	return dao.deleteByName(name) == 1;
}
