
#include "stdafx.h"
#include "MettingRoomListService.h"
#include "../../../dao/metting/mettingroomlist/MettingRoomListDAO.h"



MettingRoomListPageDTO::Wrapper MettingRoomListService::listAll(const MettingRoomListQuery::Wrapper& query)
{
	auto pages = MettingRoomListPageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	MettingRoomListDAO dao;
	uint64_t count = dao.count(query);

	if (count <= 0)
	{
		return pages;
	}


	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<MettingRoomListDO> result = dao.selectWithPage(query);
	for (MettingRoomListDO sub : result)
	{
		auto dto = MettingRoomListDTO::createShared();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, id, Ids, mettingname, Names, mettingbuild, Build, mettingfloor, Floor, mettingcapacity, capacity, mettingroomnumber, Roomnumber, mettingdis, Dis, mettingdevice, Device, mettingavailable, Available, meeting,Meetings);
			pages->addData(dto);
	}

	return pages;
}