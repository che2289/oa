#pragma once

#ifndef _ORGNAMETREEDO_H_
#define _ORGNAMETREEDO_H_

#include "DoInclude.h"
/**
 * 测试菜单数据库实体
 */
class OrgNameTreeDO
{
	//org_unit表下; 组织id; xid; varchar
	CC_SYNTHESIZE(string, xid, Xid);
	//org_unit表下; 组织名称; unit_xname; varchar
	CC_SYNTHESIZE(string, xname, Xname);
	//org_unit表下; 唯一编码; xunique; varchar
	CC_SYNTHESIZE(string, xunique, Xunique);
	//组织层级编号
	CC_SYNTHESIZE(int, xlevel, Xlevel);
	//组织层级名称
	CC_SYNTHESIZE(string, xlevelname, Xlevelname);
	//org_unit表下; 上级组织; xsuperior; varchar
	CC_SYNTHESIZE(string, xsuperior, Xsuperior);
	//组织层级顺序编号
	CC_SYNTHESIZE(string, xlevelOrderNumber, XlevelOrderNumber);
public:
	OrgNameTreeDO() {}
	OrgNameTreeDO(string xid, string xname,string xunique, uint64_t xlevel, string xlevelname, string xsuperior, string xlevelOrderNumber)
	{
		this->xid = xid;
		this->xname = xname;
		this->xunique = xunique;
		this->xlevel = xlevel;
		this->xlevelname = xlevelname;
		this->xsuperior = xsuperior;
		this->xlevelOrderNumber = xlevelOrderNumber;
	}
};


#endif // !_ORGNAMETREEDO_H_