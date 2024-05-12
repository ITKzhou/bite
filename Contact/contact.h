#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>



#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define MAX 100

#define DEFAULT_SZ 3
#define DEFAULT_INC 2



//定义联系人的信息
typedef struct peoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}peoInfo;


//定义通讯录
typedef struct Contact
{
	peoInfo data[MAX];
	int sz;//记录通讯录里面联系人的个数
}Contact;






//初始化通讯录
void InitContact(Contact* pc);

//增加联系人
void AddContact(Contact* pc);

//显示所有的联系人
void ShowContact(const Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//销毁通讯录
void DestroyContact(Contact* pc);






