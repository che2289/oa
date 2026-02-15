
#include "stdafx.h"
#include "MettingListService.h"
#include "../../../dao/metting/mettinglist/MettingListDAO.h"
#include "../lib-common/include/SimpleDateTimeFormat.h"

MettingListPageDTO::Wrapper MettingListService::listAll(const MettingListQuery::Wrapper& query)
{
	auto pages = MettingListPageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	MettingListDAO dao;
	uint64_t count = dao.count(query);

	if (count <= 0)
	{
		return pages;
	}

	// query-date
	// auto Time = SimpleDateTimeFormat();
	// string time = Time.format("%H:%M");
	// 
	// if (query->time.getValue(0) < time)
	// {
	// 
	// }

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<MettingListDO> result = dao.selectWithPage(query);
	for (MettingListDO sub : result)
	{
		auto dto = MettingListDTO::createShared();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, name, Names, date1, Dates, timestart, Timestart, timeend, Timeend, title1, Title, mettingroom, Mtroom)
			pages->addData(dto);
	}

	return pages;
}
