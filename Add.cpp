#include "add.h"
void add(struct mailList* maillist)
{
	maillist->num++;
	cout << "������������" << endl;
	cin >> maillist->Arry[maillist->num].name;
	while (true)
	{
		cout << "�������Ա�" << endl;
		cout << "1��������������" << endl;
		cout << "2������������Ů" << endl;
		cin >> maillist->Arry[maillist->num].sex;
		if (maillist->Arry[maillist->num].sex == 1 ||
			maillist->Arry[maillist->num].sex == 2)
			break;
		else cout << "�����������������룡" << endl;
	}
	cout << "����������" << endl;
	cin >> maillist->Arry[maillist->num].age;
	cout << "������绰����" << endl;
	cin >> maillist->Arry[maillist->num].numble;
	cout << "�������ַ" << endl;
	cin >> maillist->Arry[maillist->num].addr;
	system("pause");
	system("cls");
}