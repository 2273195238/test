#include "add.h"
void add(struct mailList* maillist)
{
	maillist->num++;
	cout << "请输入姓名：" << endl;
	cin >> maillist->Arry[maillist->num].name;
	while (true)
	{
		cout << "请输入性别" << endl;
		cout << "1——————男" << endl;
		cout << "2——————女" << endl;
		cin >> maillist->Arry[maillist->num].sex;
		if (maillist->Arry[maillist->num].sex == 1 ||
			maillist->Arry[maillist->num].sex == 2)
			break;
		else cout << "输入有误，请重新输入！" << endl;
	}
	cout << "请输入年龄" << endl;
	cin >> maillist->Arry[maillist->num].age;
	cout << "请输入电话号码" << endl;
	cin >> maillist->Arry[maillist->num].numble;
	cout << "请输入地址" << endl;
	cin >> maillist->Arry[maillist->num].addr;
	system("pause");
	system("cls");
}