#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


//��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc, 0, sizeof(pc->data));
}

//������ϵ��
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷���ӣ�");
		return;
	}
	printf("��������ϵ�˵�����:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("��������ϵ�˵�����:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("��������ϵ�˵��Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("��������ϵ�˵ĵ绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("��������ϵ�˵ĵ�ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("��ӳɹ�\n");
}

//��ʾ���е���ϵ��
void ShowContact(const Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ӡ��");
		return;
	}
	int i = 0;
	printf("  %s\t\t%s\t\t%s\t\t%s\t\t%s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		//��ӡÿ���˵���Ϣ
		printf("%d.%s\t\t%d\t\t%s\t\t%s\t\t%s\n",
			i+1,pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

//������������ϵ�ˣ��ҵ������±꣬�����ҵ�����-1
static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}


//ɾ��ָ����ϵ��
void DelContact(Contact* pc)
{
	char name[NAME_MAX];
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	printf("��������Ҫɾ����ϵ�˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	//ɾ����ϵ��
	int i = 0;
	for (i = ret; i < pc->sz - 1; i++)//���ѭ������ɾ�����һ����ϵ��
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;//��ϵ�˼�1����ɾ�����һ���ˣ��򳤶�ֱ�Ӽ�1
	printf("ɾ���ɹ�\n");
}

//����ָ����ϵ��
void SearchContact(Contact* pc)
{
	char name[NAME_MAX];
	assert(pc);
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	printf("  %s\t\t%s\t\t%s\t\t%s\t\t%s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%d.%s\t\t%d\t\t%s\t\t%s\t\t%s\n",
		ret + 1, pc->data[ret].name, pc->data[ret].age, pc->data[ret].sex, pc->data[ret].tele, pc->data[ret].addr);
}

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc)
{
	char name[NAME_MAX];
	assert(pc);
	printf("������Ҫ�޸���ϵ�˵�����:");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	printf("��������ϵ�˵�����:>");
	scanf("%s", pc->data[ret].name);
	printf("��������ϵ�˵�����:>");
	scanf("%d", &(pc->data[ret].age));
	printf("��������ϵ�˵��Ա�:>");
	scanf("%s", pc->data[ret].sex);
	printf("��������ϵ�˵ĵ绰:>");
	scanf("%s", pc->data[ret].tele);
	printf("��������ϵ�˵ĵ�ַ:>");
	scanf("%s", pc->data[ret].addr);

	printf("�޸ĳɹ�\n");
}

//����
int cmp_name(const void* p1, const void* p2)
{
	return strcmp(((peoInfo*)p1)->name, ((peoInfo*)p2)->name);
}

int cmp_age(const void* p1, const void* p2)
{
	return ((peoInfo*)p1)->age - ((peoInfo*)p2)->age;
}

void SortContact(Contact* pc,int num)
{
	if (num)
	{
		qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_name); //������������
	}
	else
	{
		qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_age);//������������
	}
	ShowContact(pc);
}
