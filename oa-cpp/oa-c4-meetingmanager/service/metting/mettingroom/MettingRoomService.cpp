
#include "stdafx.h"
#include "MettingRoomService.h"
#include "../../../dao/metting/mettingroom/MettingRoomDAO.h"



MettingBuildPageDTO::Wrapper MettingRoomService::listAll()
{
	auto pages = MettingBuildPageDTO::createShared();
	MettingRoomDAO dao;
	list<MettingBuildDO> result = dao.select();
	for (MettingBuildDO sub : result)
	{
		auto dto = MettingBuildDTO::createShared();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, mettingbuild, Build);
		pages->addData(dto);
	}

	return pages;
}

uint64_t MettingRoomService::saveData(const MettingRoomDTO::Wrapper& dto)
{
	// 组装DO数据
	MettingRoomDO data;
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Ids, id, Names, name, Build, location, Floor, floor, capacity, capacity, Roomnumber, housenumber, Dis, extnumber, Device, device, Available, status);
	// 执行数据添加
	MettingRoomDAO dao;
	return dao.insert(data);
}
