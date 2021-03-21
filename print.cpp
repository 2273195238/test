#include "add.h"
void print(const struct mailList* p)
{
	if (p->num == 0)cout << "当前记录为空" << endl;
	else
	for (int i = 1; i <= p->num; i++)
	{
		cout << "姓名：" << p->Arry[i].name << "\t"
			<< "性别：" << (p->Arry[i].sex == 1 ? "男" : "女") << "\t"
			<< "年龄：" << p->Arry[i].age << "\t"
			<< "电话号码：" << p->Arry[i].numble << "\t"
			<< "住址：" << p->Arry[i].addr << endl;
	}
	system("pause");
	system("cls");
}