#pragma once

#ifndef _ROOMINFODTO_H_
#define _ROOMINFODTO_H_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class RoomInfoDTO : public oatpp::DTO
{
	DTO_INIT(RoomInfoDTO, DTO);

	API_DTO_FIELD_DEFAULT(String, id, ZH_WORDS_GETTER("room.setting.building.xid"));
API_DTO_FIELD_DEFAULT(String, name, ZH_WORDS_GETTER("room.setting.building.xname"));
API_DTO_FIELD_DEFAULT(String, address, ZH_WORDS_GETTER("room.setting.building.xaddress"));
API_DTO_FIELD_DEFAULT(String, xpinyin, ZH_WORDS_GETTER("room.building.xpinyin"));
API_DTO_FIELD_DEFAULT(String, xpinyinintial, ZH_WORDS_GETTER("room.building.xpinyinintial"));

};

#include OATPP_CODEGEN_END(DTO)

#endif // !_ROOMINFODTO_H_
