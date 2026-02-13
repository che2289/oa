#pragma once

#ifndef _MemberDO_H_
#define _MemberDO_H_

#include "../../Macros.h"
#include <string>
#include <list>
using namespace std;

class MemberDo
{
	// ±àºÅ
	CC_SYNTHESIZE(uint64_t, id, Id);
public:
	MemberDo() {
		id = 1;
	}
};

#endif // !_PERSONINFODO_H_
