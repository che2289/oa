
#include "stdafx.h"
#include "MettingRoomListController.h"
#include "../../../service/metting/mettingroomlist/MettingRoomListService.h"
#include "../../ApiDeclarativeServicesHelper.h"

MettingRoomListPageJsonVO::Wrapper MettingRoomListController::execQueryRoomList(const MettingRoomListQuery::Wrapper& query)
{
	auto jvo = MettingRoomListPageJsonVO::createShared();
	// if (query->time1 >= 0 && query->time1 / 100 <= 24 && query->time1 % 100 <= 60)
	// {
	// 	jvo->init(MettingRoomListPageDTO({}), RS_FAIL);
	// 	return jvo;
	// }

	MettingRoomListService service;
	auto result = service.listAll(query);
	jvo->success(result);
	return jvo;
}
