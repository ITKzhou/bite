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



//������ϵ�˵���Ϣ
typedef struct peoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}peoInfo;


//����ͨѶ¼
typedef struct Contact
{
	peoInfo data[MAX];
	int sz;//��¼ͨѶ¼������ϵ�˵ĸ���
}Contact;






//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//��ʾ���е���ϵ��
void ShowContact(const Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

//����ͨѶ¼
void DestroyContact(Contact* pc);






