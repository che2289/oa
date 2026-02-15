#pragma once

#ifndef _MEETINGROOMSELECT_VO_
#define _MEETINGROOMSELECT_VO_

#include "../../GlobalInclude.h"
#include "../../dto/meetingmanager/MeetingRoomSelectDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 会议室选择JsonVO，用于响应给客户端的Json对象
 */
class MeetingRoomSelectJsonVO : public JsonVO<MeetingRoomSelectDTO::Wrapper> {
    DTO_INIT(MeetingRoomSelectJsonVO, JsonVO<MeetingRoomSelectDTO::Wrapper>);
};



/**
 * 位置数组响应 JsonVO，用于返回包含多个 LocationDTO 对象的 JSON 数组
 */
class LocationJsonVO : public JsonVO<oatpp::Vector<oatpp::Object<LocationDTO>>> {
    DTO_INIT(LocationJsonVO, JsonVO<oatpp::Vector<oatpp::Object<LocationDTO>>>);
};

/**
 * 会议室选择分页JsonVO，用于响应给客户端的Json对象
 */
class MeetingRoomSelectPageJsonVO : public JsonVO<MeetingRoomSelectPageDTO::Wrapper> {
    DTO_INIT(MeetingRoomSelectPageJsonVO, JsonVO<MeetingRoomSelectPageDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif // !_MEETINGROOMSELECT_VO_
