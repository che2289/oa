#pragma once

#ifndef _MettingRoomList_VO_
#define _MettingRoomList_VO_

#include "../../../GlobalInclude.h"
#include "../../../dto/metting/mettingroomlist/MettingRoomListDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class MettingRoomListJsonVO : public JsonVO<MettingRoomListDTO::Wrapper> {
	DTO_INIT(MettingRoomListJsonVO, JsonVO<MettingRoomListDTO::Wrapper>);
};

/**
 * 示例分页显示JsonVO，用于响应给客户端的Json对象
 */
class MettingRoomListPageJsonVO : public JsonVO<MettingRoomListPageDTO::Wrapper> {
	DTO_INIT(MettingRoomListPageJsonVO, JsonVO<MettingRoomListPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_MettingRoomList_VO_