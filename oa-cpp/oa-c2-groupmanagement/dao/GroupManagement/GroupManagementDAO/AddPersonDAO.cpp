
#include "stdafx.h"
#include "AddPersonDAO.h"
#include "AddPersonMapper.h"
#include <sstream>

uint64_t AddPersonDAO::insert(const OrgGroupPersonlistDO& iObj)
{
	//查已存在成员
	stringstream sql_vals;
	sql_vals << "SELECT CONCAT(GROUP_XID,xpersonList) group_person FROM org_group_personlist";
	AddPersonMapper mapper;
	string sqlStr = sql_vals.str();
	auto res = sqlSession->executeQuery<OrgGroupPersonlistDO, AddPersonMapper>(sqlStr, mapper);
	set<string> st;
	for (auto val : res) {
		st.insert(val.getGroup_person());
	}
	//判重复
	int cnt = st.size();
	string tmp = iObj.getGroup_xid() + iObj.getXperson_list();
	st.insert(tmp);

	if (cnt == st.size()) {
		return 0;
	}
	string sql = "INSERT INTO `org_group_personlist` (`GROUP_XID`, `xpersonList`) VALUES (?, ?)";
	return sqlSession->executeUpdate(sql, "%s%s", iObj.getGroup_xid(), iObj.getXperson_list());
}