#include "add.h"
int main()
{
	struct member Arry[MAX];
	struct mailList maillist;
	maillist.num = 0;
	int key;
	while (true)
	{
		showMenu();
		cin >> key;
		switch (key)
		{
		case 1:
			add(&maillist);
			break;
		case 2:
			print(&maillist);
			break;
		case 3:
			deletes(&maillist);
			break;
		case 4:
			findPerson(&maillist);
			break;
		case 5:
			amend(&maillist);
			break;
		case 6:
			empty(&maillist);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}