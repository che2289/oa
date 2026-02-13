
#include "stdafx.h"
#include "OrgUnitattributeController.h"
#include "service/OrgUnitattributeService.h"

//#include "../ApiDeclarativeServicesHelper.h"

OrgUnitattributePageJsonVO::Wrapper OrgUnitattributeController::execQueryOrgUnitattribute(const OrgUnitattributeQuery::Wrapper&  query, const PayloadDTO& payload)
{
	// 定义一个Service
	OrgUnitattributeService service;
	// 查询数据
	auto result = service.listAll(query);
	// 响应结果
	auto jvo = OrgUnitattributePageJsonVO::createShared();

	jvo->success(result);

	return jvo;
}

Uint64JsonVO::Wrapper OrgUnitattributeController::execRemoveOrgUnitattribute(const OrgUnitattributeQuery::Wrapper& Xids)
{
	// 定义返回数据对象
	auto jvo = Uint64JsonVO::createShared();
	auto xids = Xids->Xids;
	for (int i = 0; i < xids.get()->size(); i++) {
		string id = xids[i];

		// 定义一个Service
		OrgUnitattributeService service;
		// 执行数据删除
		if (service.removeData(id)) {
			jvo->success(i);
		}
		else
		{
			jvo->fail(i);
		}
	}

	// 响应结果
	return jvo;
}

