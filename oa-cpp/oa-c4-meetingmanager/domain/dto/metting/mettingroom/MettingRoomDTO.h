#pragma once

#ifndef _MettingRoom_DTO_
#define _MettingRoom_DTO_
#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class MettingRoomDTO : public oatpp::DTO
{
	DTO_INIT(MettingRoomDTO, DTO);
	// id
	API_DTO_FIELD_DEFAULT(String, id				,		 ZH_WORDS_GETTER("metting.id"));
	// 会议name
	API_DTO_FIELD_DEFAULT(String, name		,		 ZH_WORDS_GETTER("metting.name"));
	// 会议build
	API_DTO_FIELD_DEFAULT(String, location		,		 ZH_WORDS_GETTER("metting.build"));
	// 会议floor
	API_DTO_FIELD_DEFAULT(Int32, floor		,		 ZH_WORDS_GETTER("metting.floor"));
	// 会议capacity
	API_DTO_FIELD_DEFAULT(Int32, capacity	,		 ZH_WORDS_GETTER("metting.capacity"));
	// 会议roomnumber
	API_DTO_FIELD_DEFAULT(String, housenumber	,		 ZH_WORDS_GETTER("metting.roomnumber"));
	// 会议dis
	API_DTO_FIELD_DEFAULT(Int32, extnumber		,		 ZH_WORDS_GETTER("metting.dis"));
	// 会议device
	API_DTO_FIELD_DEFAULT(String, device		,		 ZH_WORDS_GETTER("metting.device"));
	// 会议status
	API_DTO_FIELD_DEFAULT(Boolean, status	,		 ZH_WORDS_GETTER("metting.available"));

};

/**
 * 示例分页传输对象
 */
class MettingRoomPageDTO : public PageDTO<MettingRoomDTO::Wrapper>
{
	DTO_INIT(MettingRoomPageDTO, PageDTO<MettingRoomDTO::Wrapper>);
};

class MettingBuildDTO : public oatpp::DTO
{
	DTO_INIT(MettingBuildDTO, DTO);
	// 会议build
	API_DTO_FIELD_DEFAULT(String, mettingbuild, ZH_WORDS_GETTER("metting.build"));
};

class MettingBuildPageDTO : public PageDTO<MettingBuildDTO::Wrapper>
{
	DTO_INIT(MettingBuildPageDTO, PageDTO<MettingBuildDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_MettingRoom_DTO_