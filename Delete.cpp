#include "add.h"
void deletes(struct mailList* p)
{
	cout << "������Ҫɾ������ϵ������" << endl;
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
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}