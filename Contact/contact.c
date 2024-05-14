#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


////初始化通讯录--静态版本
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	memset(pc, 0, sizeof(pc->data));
//}


//初始化通讯录--动态版本
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	pc->capacity = DEFAULT_SZ;
//	pc->data = calloc(pc->capacity, sizeof(peoInfo));//参数（元素个数，类型大小）
//	if (pc->data == NULL)
//	{
//		perror("InitContac->calloc");
//		return;
//	}
//}

//加载文件信息到通讯录
void LoadContact(Contact* pc)
{
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	peoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoInfo), 1, pf))
	{
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	fclose(pf);
	pf = NULL;
}


//初始化通讯录--文件版本
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	pc->data = calloc(pc->capacity, sizeof(peoInfo));//参数（元素个数，类型大小）
	if (pc->data == NULL)
	{
		perror("InitContac->calloc");
		return;
	}
	//加载文件信息到通讯录
	LoadContact(pc);

}




////增加联系人--静态版本
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，无法添加！");
//		return;
//	}
//	printf("请输入联系人的姓名:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入联系人的年龄:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入联系人的性别:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入联系人的电话:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入联系人的地址:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("添加成功\n");
//}


//增加通讯录容量
void CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)//通讯录容量满了，需要扩容
	{
		peoInfo* ptr = (peoInfo*)realloc(pc->data, (pc->capacity + DEFAULT_INC) * sizeof(peoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += DEFAULT_INC;
			printf("扩容成功\n");
		}
		else
		{
			perror("CheckCapacity->realloc");
			return;
		}
	}
}


//增加联系人--动态版本
void AddContact(Contact* pc)
{
	assert(pc);
	//增加容量
	CheckCapacity(pc);

	//填写信息
	printf("请输入联系人的姓名:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入联系人的年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入联系人的性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入联系人的电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入联系人的地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("添加成功\n");
}



//显示所有的联系人
void ShowContact(const Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法打印！");
		return;
	}
	int i = 0;
	printf("  %s\t\t%s\t\t%s\t\t%s\t\t%s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		//打印每个人的信息
		printf("%d.%s\t\t%d\t\t%s\t\t%s\t\t%s\n",
			i+1,pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

//按姓名查找联系人，找到返回下标，不能找到返回-1
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


//删除指定联系人
void DelContact(Contact* pc)
{
	char name[NAME_MAX];
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	printf("请输入你要删除联系人的姓名:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	//删除联系人
	int i = 0;
	for (i = ret; i < pc->sz - 1; i++)//这个循环不能删除最后一个联系人
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;//联系人减1，若删除最后一个人，则长度直接减1
	printf("删除成功\n");
}

//查找指定联系人
void SearchContact(Contact* pc)
{
	char name[NAME_MAX];
	assert(pc);
	printf("请输入要查找联系人的姓名:>");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	printf("  %s\t\t%s\t\t%s\t\t%s\t\t%s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%d.%s\t\t%d\t\t%s\t\t%s\t\t%s\n",
		ret + 1, pc->data[ret].name, pc->data[ret].age, pc->data[ret].sex, pc->data[ret].tele, pc->data[ret].addr);
}

//修改指定联系人
void ModifyContact(Contact* pc)
{
	char name[NAME_MAX];
	assert(pc);
	printf("请输入要修改联系人的名字:");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	printf("请输入联系人的姓名:>");
	scanf("%s", pc->data[ret].name);
	printf("请输入联系人的年龄:>");
	scanf("%d", &(pc->data[ret].age));
	printf("请输入联系人的性别:>");
	scanf("%s", pc->data[ret].sex);
	printf("请输入联系人的电话:>");
	scanf("%s", pc->data[ret].tele);
	printf("请输入联系人的地址:>");
	scanf("%s", pc->data[ret].addr);

	printf("修改成功\n");
}

//排序
int cmp_name(const void* p1, const void* p2)
{
	return strcmp(((peoInfo*)p1)->name, ((peoInfo*)p2)->name);
}

int cmp_age(const void* p1, const void* p2)
{
	return ((peoInfo*)p1)->age - ((peoInfo*)p2)->age;
}

void SortContact(Contact* pc)
{
	int num = 0;
	printf("<1名字升序> <0:年龄升序>，请输入:>>");
	scanf("%d", &num);
	if (num)
	{
		qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_name); //按照名字升序
	}
	else
	{
		qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_age);//按照年龄升序
	}
	ShowContact(pc);
}


//销毁通讯录
void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}


//保存通讯录到文件
void SaveContact(Contact* pc)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(peoInfo), 1, pf);
	}

	fclose(pf);
	pf = NULL;
}


