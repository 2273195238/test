#include "add.h"
int isExist(struct mailList* p, string name)
{
	for (int i = 1; i <= p->num; i++)
	{
		if (p->Arry[i].name == name)
			return i;
	}
	return -1;
}