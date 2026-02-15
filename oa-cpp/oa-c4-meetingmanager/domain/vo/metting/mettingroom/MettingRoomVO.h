#pragma once

#ifndef _MettingRoom_VO_
#define _MettingRoom_VO_

#include "../../../GlobalInclude.h"
#include "../../../dto/metting/mettingroom/MettingRoomDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class MettingBuildJsonVO : public JsonVO<MettingBuildDTO::Wrapper> {
	DTO_INIT(MettingBuildJsonVO, JsonVO<MettingBuildDTO::Wrapper>);
};

/**
 * 示例分页显示JsonVO，用于响应给客户端的Json对象
 */
class MettingBuildPageJsonVO : public JsonVO<MettingBuildPageDTO::Wrapper> {
	DTO_INIT(MettingBuildPageJsonVO, JsonVO<MettingBuildPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_MettingRoom_VO_