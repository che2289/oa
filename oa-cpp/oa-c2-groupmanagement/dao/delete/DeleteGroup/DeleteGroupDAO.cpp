#include "DeleteGroupDAO.h"



int DeleteGroupDAO::deleteById(string groupId)
{
	//因为要删除两个表org_group和org_group_groupList的数据，我不考虑xid在一个表存在而另一个不存在的特殊情况,
	//所以要么都有的删，要么都没有

	//删除两个表的数据
	string sql1 = "DELETE FROM org_group WHERE xid = ?";
	int ans = sqlSession->executeUpdate(sql1, "%s", groupId);
	string sql2 = "DELETE FROM org_group_grouplist WHERE xgroupList = ?";
	sqlSession->executeUpdate(sql2, "%s", groupId);

	return ans;	//返回1表示删除成功

}
