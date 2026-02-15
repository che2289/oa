#pragma once

#ifndef _ROOMINFOVO_H_
#define _ROOMINFOVO_H_

#include "../../GlobalInclude.h"
#include "domain/dto/room-new/RoomInfoDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class RoomInfoVO : public oatpp::DTO
{
	DTO_INIT(RoomInfoDTO, DTO);
	API_DTO_FIELD_DEFAULT(String, id, "room.setting.building.xid");
	API_DTO_FIELD_DEFAULT(String, name, "room.setting.building.xname");
};



/**
 * Room信息显示JsonVO，用于响应给客户端的Json对象
 */
class RoomInfoJsonVO : public JsonVO<RoomInfoDTO::Wrapper> {

	DTO_INIT(RoomInfoJsonVO, JsonVO<RoomInfoDTO::Wrapper>);
};

class RoomBuidingJsonVo : public JsonVO<RoomInfoVO::Wrapper> {
	DTO_INIT(RoomBuidingJsonVo, JsonVO<RoomInfoVO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_ROOMINFOVO_H_
