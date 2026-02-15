
#include "stdafx.h"
#include "MettingRoomDAO.h"
#include "MettingRoomMapper.h"
#include <sstream>

//定义条件解析宏，减少重复代码

std::list<MettingBuildDO> MettingRoomDAO::select()
{
	string sql = "SELECT xaddress FROM mt_building";
	MettingBuildMapper mapper;
	return sqlSession->executeQuery<MettingBuildDO, MettingBuildMapper>(sql, mapper);
}

uint64_t MettingRoomDAO::insert(const MettingRoomDO& iObj)
{
	SimpleDateTimeFormat Time1;
	SnowFlake snow(1,1);

	auto timetmp = Time1.format();
	auto snowtmp = snow.nextId();

	string tmp1 = std::to_string(snowtmp);
	string tmp2;
	for (auto tmp : tmp1)
	{
		if (std::isalnum(tmp))
		{
			tmp2 += tmp;
		}
	}
	string tmp3 = tmp1 + tmp2;
	string sql = "INSERT INTO `mt_room` (`xid`,`xdistributeFactor`,`xavailable`,`xbuilding`,`xcapacity`,`xdevice`,`xfloor`,`xname`,`xroomnumber`,`xcreateTime`,`xsequence`) VALUES (?,?,?,?,?,?,?,?,?,?,?)";
	return sqlSession->executeUpdate(sql,"%s%nul%b%s%nul%s%nul%s%s%s%s" ,tmp1, iObj.getDis(), iObj.getAvailable(), iObj.getBuild(), iObj.getcapacity(), iObj.getDevice(), iObj.getFloor(), iObj.getNames(), iObj.getRoomnumber(),timetmp,tmp3);
}
