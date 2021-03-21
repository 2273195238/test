#include "add.h"
void amend(struct mailList* p)
{
	cout << "请输入想要修改的联系人姓名" << endl;
	string name;
	cin >> name;
	int ret = isExist(p, name);
	if (ret != -1)
	{
		cout << "请输入姓名：" << endl;
		cin >> p->Arry[ret].name;
		while (true)
		{
			cout << "请输入性别" << endl;
			cout << "1——————男" << endl;
			cout << "2——————女" << endl;
			cin >> p->Arry[ret].sex;
			if (p->Arry[ret].sex == 1 ||p->Arry[ret].sex == 2)
				break;
			else cout << "输入有误，请重新输入！" << endl;
		}
		cout << "请输入年龄" << endl;
		cin >> p->Arry[ret].age;
		cout << "请输入电话号码" << endl;
		cin >> p->Arry[ret].numble;
		cout << "请输入地址" << endl;
		cin >> p->Arry[ret].addr;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}