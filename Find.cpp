#include "add.h"
void findPerson(struct mailList* p)
{
	cout << "������Ҫ���ҵ���ϵ������" << endl;
	string name;
	cin >> name;
	int ret = isExist(p, name);
	if (ret != -1)
	{
		cout << "������" << p->Arry[ret].name << "\t"
			<< "�Ա�" << (p->Arry[ret].sex == 1 ? "��" : "Ů") << "\t"
			<< "���䣺" << p->Arry[ret].age << "\t"
			<< "�绰���룺" << p->Arry[ret].numble << "\t"
			<< "סַ��" << p->Arry[ret].addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}