
#include "stdafx.h"
#include "MettingListController.h"
#include "../../../service/metting/mettinglist/MettingListService.h"
#include "../../ApiDeclarativeServicesHelper.h"

MettingListPageJsonVO::Wrapper MettingListController::execMettingListQuery(const MettingListQuery::Wrapper& query)
{
	MettingListService service;
	auto result = service.listAll(query);
	// ÏìÓ¦½á¹û
	auto jvo = MettingListPageJsonVO::createShared();
	jvo->success(result);
	return jvo;
}
