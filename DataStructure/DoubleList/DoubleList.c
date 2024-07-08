#define _CRT_SECURE_NO_WARNINGS 1


#include "DoubleList.h"




LTNode* BuyLTNode(LTDataType x) {
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) {
		perror("malloc fail");
		exit(-1);
	}
	newnode->val = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;
}

bool LTEmpty(LTNode* pHead) {
	assert(pHead);
	return pHead->next == pHead;
}

LTNode* LTInit() {
	LTNode* pHead = BuyLTNode(-1);
	pHead->next = pHead;
	pHead->prev = pHead;

	return pHead;
}

void ListPrint(LTNode* pHead) {
	assert(pHead); 
	printf("pHead<=> ");
	LTNode* cur = pHead->next;
	while (cur != pHead) {
		printf("%d<=> ", cur->val);
		cur = cur->next;
	}
	printf("\n");	
}

void ListDestory(LTNode* pHead) {
	assert(pHead);
	LTNode* cur = pHead->next;
	while (cur != pHead) {
		pHead->next = cur->next;
		
		free(cur);
		cur = pHead->next;
	}
	free(pHead);
	//pHead�β�ֻ��ʵ�εĿ������ı��ββ������޸�ʵ�Σ���Ҫ�ڵ���ListDestory()���ٶ�ָ���ÿ�
}


void ListPushBack(LTNode* pHead, LTDataType x) {
	//assert(pHead);

	//LTNode* newnode = BuyLTNode(x);
	//LTNode* tail = pHead->prev;
	//
	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = pHead;
	//pHead->prev = newnode;

	//��pHead֮ǰ���룬Ҳ����β��

	ListInsert(pHead, x);
}

void ListPushFront(LTNode* pHead, LTDataType x) {
	//assert(pHead);

	//LTNode* newnode = BuyLTNode(x);
	//LTNode* first = pHead->next;

	//pHead->next = newnode;
	//newnode->prev = pHead;
	//newnode->next = first;
	//first->prev = newnode;

	//�ڵ�һ�����֮ǰ���롣Ҳ����ͷ��

	ListInsert(pHead->next, x);
}

void ListPopBack(LTNode* pHead) {
	//assert(pHead);
	//assert(!LTEmpty(pHead));

	//LTNode* tail = pHead->prev;
	//LTNode* tailPrev = tail->prev;

	//free(tail);
	//tailPrev->next = pHead;
	//pHead->prev = tailPrev;


	ListErase(pHead->prev);
}

void ListPopFront(LTNode* pHead) {
	//assert(pHead);
	//assert(!LTEmpty(pHead));

	//LTNode* first = pHead->next;
	//LTNode* second = first->next;

	//free(first);
	//pHead->next = second;
	//second->prev = pHead;

	ListErase(pHead->next);
}


void ListInsert(LTNode* pos, LTDataType x) {
	assert(pos);

	LTNode* newnode = BuyLTNode(x);
	LTNode* posPrev = pos->prev;

	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;	
}

void ListErase(LTNode* pos) {
	assert(pos);

	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext; 
	posNext->prev = posPrev;
	free(pos);
}

LTNode* ListFind(LTNode* pHead, LTDataType x) {
	assert(pHead);
	LTNode* cur = pHead->next;
	while (cur != pHead) {
		if (cur->val == x) {
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

