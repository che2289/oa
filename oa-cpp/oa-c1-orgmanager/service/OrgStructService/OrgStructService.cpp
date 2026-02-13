#include "OrgStructService.h"

#include "stdafx.h"
#include "OrgStructService.h"
#include "domain/do/OrgStructDO/OrgStructDO.h"
#include "../../dao/OrgStructDao/OrgStructDao.h"

// 列举组织成员信息------------------------------------------------------------------------
OrgStructPageDTO::Wrapper OrgStructService::listAll(const OrgStructPageQuery::Wrapper& query)
{
	////组装 DTO 数据对象
	auto pages = OrgStructPageDTO::createShared();

	OrgStructDao Dao;
	////这里已经将数据传入
	auto ListDO = Dao.selectWithPage(query);

	//这里应该是存放我传出的数据 DTO 
	// 如果传入的是Query拿我应该用DTO当返回值
	// 如果我传入的是DTO应该是QUERY当返回值, 最后封装为jsonVO 响应终端
	//page应该接收DAO传输出的数据

	pages->total = ListDO.size();
	for (auto &list : ListDO) {
		auto DTO = OrgStructDTO::createShared();
		DTO->xdistinguishedName = list.getXdistinguishedName();
		DTO->xemployee = list.getXemployee();
		DTO->xmail = list.getXmail();
		DTO->xmobile = list.getXmobile();
		DTO->xiconLdpi = list.getXiconLdpi();
		DTO->xname = list.getXname();
		pages->addData(DTO);
	}
	return pages;
}

/*
	功能 : 列举查询信息
	实现思路: 
*/
OrgStaffPageDTO::Wrapper OrgStaffService::list(const OrgStaffPageQuery::Wrapper& query)
{
	////组装 DTO 数据对象
	auto pages = OrgStaffPageDTO::createShared();

	OrgStaffDao Dao;
	auto ListDO = Dao.selectWithPage(query);

	pages->total = ListDO.size();

	for (auto& list : ListDO) {
		auto DTO = OrgStaffDTO::createShared();
		DTO->xdistinguishedName = list.getXdistinguishedName();
		DTO->xmobile = list.getXmobile();
		pages->addData(DTO);
	}
	return pages;
}

//删除组织=========================================================================================
bool OrgDelectService::removeData(const DeleteOrgmeberDTO::Wrapper& condtion)
{
	OrgStaffDao dao;
	return dao.deleteById(condtion->xemployee.getValue({})) == 1;
}