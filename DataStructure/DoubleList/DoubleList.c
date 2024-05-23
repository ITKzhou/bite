#define _CRT_SECURE_NO_WARNINGS 1


#include "DoubleList.h"




LTNode* CreateLTNode(LTDataType x) {
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

LTNode* LTInit() {
	LTNode* pHead = CreateLTNode(-1);
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
}


void ListPushBack(LTNode* pHead, LTDataType x) {
	assert(pHead);
	LTNode* tail = pHead->prev;

	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) {
		perror("malloc fail");
		exit(-1);
	}
	newnode->val = x;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = pHead;
	pHead->prev = newnode;
}


void ListPopBack(LTNode* pHead) {
	assert(pHead);
	//不能为空链表
	assert(pHead->next != pHead);
	LTNode* tail = pHead->prev;
	LTNode* tailPrev = tail->prev;

	tailPrev->next = pHead;
	pHead->prev = tailPrev;
	free(tail);
	tail = NULL;
}


void ListPushFront(LTNode* pHead, LTDataType x) {
	assert(pHead);
	LTNode* newnode = CreateLTNode(x);
	LTNode* first = pHead->next;

	pHead->next = newnode;
	newnode->prev = pHead;
	newnode->next = first;
	first->prev = newnode;

}

void ListPopFront(LTNode* pHead) {
	assert(pHead);
	assert(pHead->next != pHead);
	LTNode* first = pHead->next;
	LTNode* second = first->next;
	pHead->next = second;
	second->prev = pHead;
	free(first);
	first = NULL;

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


void ListInsert(LTNode* pos, LTDataType x) {
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) {
		perror("malloc fail");
		exit(-1);
	}
	newnode->val = x;
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
	pos = NULL;
}

