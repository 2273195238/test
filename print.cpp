#include "add.h"
void print(const struct mailList* p)
{
	if (p->num == 0)cout << "��ǰ��¼Ϊ��" << endl;
	else
	for (int i = 1; i <= p->num; i++)
	{
		cout << "������" << p->Arry[i].name << "\t"
			<< "�Ա�" << (p->Arry[i].sex == 1 ? "��" : "Ů") << "\t"
			<< "���䣺" << p->Arry[i].age << "\t"
			<< "�绰���룺" << p->Arry[i].numble << "\t"
			<< "סַ��" << p->Arry[i].addr << endl;
	}
	system("pause");
	system("cls");
}