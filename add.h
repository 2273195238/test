#pragma once
#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
void showMenu();
void add(struct mailList* maillist);
void print(const struct mailList* p);
int isExist(struct mailList* p, string name);
void deletes(struct mailList* p);
void findPerson(struct mailList* p);
void amend(struct mailList* p);
void empty(struct mailList* p);
struct member
{
	string name;
	int sex;
	int age;
	string numble;
	string addr;
};
struct mailList
{
	struct member Arry[MAX];
	int num;
};