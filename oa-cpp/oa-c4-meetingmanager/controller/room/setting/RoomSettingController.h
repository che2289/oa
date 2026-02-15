#pragma once

#ifndef _ROOMSETTINGCONTROLLER_H_
#define _ROOMSETTINGCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/room-new/RoomInfoVO.h"
#include "domain/dto/room-new/RoomInfoDTO.h"
#include OATPP_CODEGEN_BEGIN(ApiController)

class RoomSettingController : public oatpp::web::server::api::ApiController
{
	// 定义控制器访问入口
	API_ACCESS_DECLARE(RoomSettingController);
	// 3 定义接口
public:
	// modify_DTO
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("room.setting.put.summary"), modifyRoomInfo, StringJsonVO::Wrapper);
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/meeting/meetingroom/room-info", modifyRoomInfo, BODY_DTO(RoomInfoVO::Wrapper, dto), execModifyRoomInfo_DTO(dto));

	//// modify_NAME
	//ENDPOINT_INFO(modifyRoomInfoName) {
	//	API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("room.setting.put.summary"), StringJsonVO::Wrapper);
	//	API_DEF_ADD_PATH_PARAMS(String, "xname", ZH_WORDS_GETTER("room.field.xname"), 1, true);
	//}
	//API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/room-setting/room-pos/{xname}", modifyRoomInfoName, PATH(String, xname), execModifyRoomInfo_NAME(xname));

	//delete
	ENDPOINT_INFO(removeRoomInfo) {
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("room.setting.delete.summary"), StringJsonVO::Wrapper);
		API_DEF_ADD_PATH_PARAMS(String, "id", ZH_WORDS_GETTER("room.setting.field.xid"), 1, true);
	}
	API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/meeting/meetingroom/room-pos/{id}", removeRoomInfo, PATH(String, id), execDeleteRoomInfo(id));


private: // 定义接口执行函数
	// 修改room位置
	StringJsonVO::Wrapper execModifyRoomInfo_DTO(const RoomInfoVO::Wrapper& dto);
	//StringJsonVO::Wrapper execModifyRoomInfo_NAME(const string& xname);

	// 删除room信息
	//StringJsonVO::Wrapper execDeleteRoomInfo(const string& xname);
	StringJsonVO::Wrapper execDeleteRoomInfo(const string& xid);

};




#include OATPP_CODEGEN_END(ApiController)

#endif // !_ROOMSETTINGCONTROLLER_H_