
#include "stdafx.h"
#include "Meetingroomcontroller.h"
#include "service/MeetingRoom/MeetingRoomService.h"

StringJsonVO::Wrapper MeetingroomController::executeModifyMeetingroom(const MeetingroomDTO::Wrapper& dto) {
	// 定义返回数据对象
	auto jvo = StringJsonVO::createShared();
	// 参数校验
	// 非空校验
	if (!dto->name || !dto->location || !dto->floor|| !dto->capacity || !dto->housenumber || !dto->extnumber||!dto->device || !dto->status)
	{
		jvo->init(String(""), RS_PARAMS_INVALID);
		return jvo;
	}
	// 有效值校验
	unordered_set<string> devices = { ZH_WORDS_GETTER("meetingroom.device1"),ZH_WORDS_GETTER("meetingroom.device2"), ZH_WORDS_GETTER("meetingroom.device3"), ZH_WORDS_GETTER("meetingroom.device4"), ZH_WORDS_GETTER("meetingroom.device5"), ZH_WORDS_GETTER("meetingroom.device6"), ZH_WORDS_GETTER("meetingroom.device7") };
	if ((dto->floor < -2 && dto->floor>50) || dto->capacity < 0  ) {
		jvo->init(String(""), RS_PARAMS_INVALID);
		return jvo;
	}
	for (auto& iter : *dto->device) {
		if (devices.find(iter) == devices.end()) {
			jvo->init(String(""), RS_PARAMS_INVALID);
			return jvo;
		}
	}
	// 定义一个Service
	MeetingRoomService service;
	// 执行数据新增
	uint64_t ok = service.updateData(dto);
	if (ok > 0) {
		jvo->success(String(dto->name));
	}
	else
	{
		jvo->fail(String(dto->name));
	}
	//响应结果
	return jvo;
}
//PersonInfoDTO::Wrapper <===> oatpp::Object<PersonInfoDTO>

StringJsonVO::Wrapper MeetingroomController::executeRoomDelete(const String& name) {
	// 定义返回数据对象
	auto jvo = StringJsonVO::createShared();
	// 参数校验
	if (!name)
	{
		jvo->init(String(""), RS_PARAMS_INVALID);
		return jvo;
	}
	// 定义一个Service
	MeetingRoomService service;
	// 执行数据删除
	if (service.removeData(name.getValue(""))) {
		jvo->success(name);
	}
	else
	{
		jvo->fail(name);
	}
	// 响应结果
	return jvo;
}
