
#ifndef _LIST_PERSONAL_IDETITYSERVICE_
#define _LIST_PERSONAL_IDETITYSERVICE_
#include "stdafx.h"
#include "list_personal_identityService.h"
#include "../../domain/do/list/org_identityDO.h"
#include "../../dao/list/list_personal_identityDAO.h"
#include "../../domain/dto/list/list_personal_identityDTO.h"

listPageDTO::Wrapper list_personal_identityService::listAll(const list_personal_identityQuery::Wrapper& query)
{
	// 构建返回对象
	auto pages = listPageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// 查询数据总条数
	list_personal_identityDAO dao;
	uint64_t count = dao.count(query);
	if (count <= 0)
	{

		return pages;
	}

	// 分页查询数据
	pages->total = count;
	pages->calcPages();
	list<org_identityDO> result = dao.selectWithPage(query);
	// 将DO转换成DTO
	for (org_identityDO sub : result)
	{
		auto dto = list_personal_identityDTO::createShared();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, xname, Xname, xunitName, XunitName, xid, Xid, xdistinguishedName, XdistinguishedName, xmajor, Xmajor)
			pages->addData(dto);

	}
	return pages;
}







#endif // !_LIST_PERSONAL_IDETITYSERVICE_
