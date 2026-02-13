#pragma 

#ifndef _ORGNAMETREEDAO_H_
#define _ORGNAMETREEDAO_H_
#include "BaseDAO.h"
#include "../domain/do/OrgNameTreeDO.h"

class OrgNameTreeDAO : public BaseDAO
{
public:
	list<OrgNameTreeDO> selectAllOrgNameTree();
};

#endif // !_ORGNAMETREEDAO_H_