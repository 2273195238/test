#include "add.h"
void findPerson(struct mailList* p)
{
	cout << "请输入要查找的联系人姓名" << endl;
	string name;
	cin >> name;
	int ret = isExist(p, name);
	if (ret != -1)
	{
		cout << "姓名：" << p->Arry[ret].name << "\t"
			<< "性别：" << (p->Arry[ret].sex == 1 ? "男" : "女") << "\t"
			<< "年龄：" << p->Arry[ret].age << "\t"
			<< "电话号码：" << p->Arry[ret].numble << "\t"
			<< "住址：" << p->Arry[ret].addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}