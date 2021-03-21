#include "add.h"
void deletes(struct mailList* p)
{
	cout << "请输入要删除的联系人姓名" << endl;
	string name;
	cin >> name;
	int ret = isExist(p, name);
	if (ret != -1)
	{
		for (int i = 1; i <= p->num; i++)
		{
			if (p->Arry[i].name == name)
			{
				p->Arry[i] = p -> Arry[i + 1];
			}
		}
		p->num--;
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}