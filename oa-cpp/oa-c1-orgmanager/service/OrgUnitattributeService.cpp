
#include "stdafx.h"
#include "dao/OrgUnitattributeDAO.h"
#include "OrgUnitattributeService.h"

OrgUnitattributePageDTO::Wrapper OrgUnitattributeService::listAll(const OrgUnitattributeQuery::Wrapper& query)
{
	// 构建返回对象
	auto pages = OrgUnitattributePageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// 查询数据总条数
	OrgUnitattributeDAO dao;
	uint64_t count = dao.count(query);
	if (count <= 0)
	{
		return pages;
	}

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<OrgUnitattributeDO> result = dao.selectWithPage(query);
	// 将DO转换成DTO
	for (OrgUnitattributeDO sub : result)
	{
		auto dto = OrgUnitattributeDTO::createShared();

		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub,
			xid, Xid,
			xcreateTime, XcreateTime,
			xsequence, Xsequence,
			xupdateTime, XupdateTime,
			xdistributeFactor, XdistributeFactor,
			xdescription, Xdescription,
			xdistinguishedName, XdistinguishedName,
			xname, Xname,
			xorderNumber, XorderNumber,
			xpinyin, Xpinyin,
			xpinyinInitial, XpinyinInitial,
			xunique, Xunique,
			xunit, Xunit
		);
			pages->addData(dto);

	}
	return pages;
}

bool OrgUnitattributeService::removeData(string id)
{
	OrgUnitattributeDAO dao;
	return dao.deleteById(id) == 1;
}
