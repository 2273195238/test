#include "add.h"
void amend(struct mailList* p)
{
	cout << "��������Ҫ�޸ĵ���ϵ������" << endl;
	string name;
	cin >> name;
	int ret = isExist(p, name);
	if (ret != -1)
	{
		cout << "������������" << endl;
		cin >> p->Arry[ret].name;
		while (true)
		{
			cout << "�������Ա�" << endl;
			cout << "1��������������" << endl;
			cout << "2������������Ů" << endl;
			cin >> p->Arry[ret].sex;
			if (p->Arry[ret].sex == 1 ||p->Arry[ret].sex == 2)
				break;
			else cout << "�����������������룡" << endl;
		}
		cout << "����������" << endl;
		cin >> p->Arry[ret].age;
		cout << "������绰����" << endl;
		cin >> p->Arry[ret].numble;
		cout << "�������ַ" << endl;
		cin >> p->Arry[ret].addr;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}