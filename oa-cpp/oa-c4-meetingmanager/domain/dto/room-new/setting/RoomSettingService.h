#pragma once
#include "stdafx.h"
#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/room-new/RoomInfoVO.h"
#include "domain/dto/room-new/RoomInfoDTO.h"

#ifndef _ROOMSETTINGSERVICE_H_
#define _ROOMSETTINGSERVICE_H_



class RoomSettingService 
{
public:
	bool updateLocation(const RoomInfoDTO::Wrapper& dto,String loc);
	bool removeLocation(const RoomInfoDTO::Wrapper& dto);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_ROOMSETTINGSERVICE_H_