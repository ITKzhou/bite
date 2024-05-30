#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

void StackInit(Stack* ps) {
	assert(ps);
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;// ��ʾtopָ��ջ��Ԫ�ص���һ��λ��
	//pst->top = -1;// ��ʾtopָ��ջ��Ԫ��
}

void StackPush(Stack* ps, STDataType x) {
	assert(ps);
	if (ps->_top == ps->_capacity) {
		STDataType newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->_a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL) {
			perror("realloc fail");
			return;
		}
		ps->_a = tmp;
		ps->_capacity = newcapacity;
	}
	ps->_a[ps->_top] = x;
	ps->_top++;
}

void StackPop(Stack* ps) {
	assert(ps);
	assert(ps->_top > 0);
	ps->_top--;
}

STDataType StackTop(Stack* ps) {
	assert(ps);
	assert(ps->_top > 0);
	return ps->_a[ps->_top - 1];
}

int StackSize(Stack* ps) {
	assert(ps);
	return ps->_top;//ʵ�����±꣬����ָ��
}

bool StackEmpty(Stack* ps) {
	assert(ps);
	return ps->_top == 0;//Ϊ�գ������棬��1����Ϊ�գ����ؼ٣���0
}

void StackDestroy(Stack* ps) {
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_top = ps->_capacity = 0;
}