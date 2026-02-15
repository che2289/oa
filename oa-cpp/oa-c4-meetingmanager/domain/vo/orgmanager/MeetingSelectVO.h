#pragma once

#ifndef _MEETINGSELECT_VO_
#define _MEETINGSELECT_VO_

#include "../../GlobalInclude.h"
#include "../../dto/orgmanager/meetingselect/MeetingSelectDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 会议选择JsonVO，用于响应给客户端的Json对象
 */
class MeetingSelectJsonVO : public JsonVO<MeetingSelectDTO::Wrapper> {
    DTO_INIT(MeetingSelectJsonVO, JsonVO<MeetingSelectDTO::Wrapper>);
};

/**
 * 会议选择分页JsonVO，用于响应给客户端的Json对象
 */
class MeetingSelectPageJsonVO : public JsonVO<MeetingSelectPageDTO::Wrapper> {
    DTO_INIT(MeetingSelectPageJsonVO, JsonVO<MeetingSelectPageDTO::Wrapper>);

};

#include OATPP_CODEGEN_END(DTO)

#endif // _MEETINGSELECT_VO_