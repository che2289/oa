#pragma once

#ifndef _DELETEGROUPDAO_H_
#define _DELETEGROUPDAO_H_
#include "BaseDAO.h"

class DeleteGroupDAO : public BaseDAO
{
public:
	// 通过ID删除数据
	int deleteById(string groupId);
};



#endif // !_DELETEGROUPDAO_H_