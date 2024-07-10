//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "Queue.h"
//
//
//void QueueInit(Queue* pq) {
//	assert(pq);
//	pq->ptail = pq->phead = NULL;
//	pq->size = 0;
//}
//
//void QueueDestroy(Queue* pq) {
//	assert(pq);
//	QNode* cur = pq->phead;
//	while (cur) {
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pq->ptail = pq->phead = NULL;
//	pq->size = 0;
//}
//
//void QueuePush(Queue* pq, QDataType x) {
//	assert(pq);
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL) {
//		perror("malloc fail");
//		return;
//	}
//	newnode->val = x;
//	newnode->next = NULL;
//
//	if (pq->ptail == NULL) {// 插入的是第一个结点
//		assert(pq->phead == NULL);
//		pq->phead = pq->ptail = newnode;
//	}
//	else {
//		pq->ptail->next = newnode;
//		pq->ptail = newnode;
//	}
//	pq->size++;
//}
//
//void QueuePop(Queue* pq) {
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	// 若只有一个结点
//	if (pq->phead->next == NULL) {
//		pq->ptail = NULL;
//	}
//	//头删
//	QNode* next = pq->phead->next;
//	free(pq->phead);
//	pq->phead = next;
//	
//	pq->size--;
//}
//
//QDataType QueueFront(Queue* pq) {
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->phead->val;
//}
//
//QDataType QueueBack(Queue* pq) {
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->ptail->val;
//}
//
//int QueueSize(Queue* pq) {
//	assert(pq);
//	return pq->size;
//}
//
//bool QueueEmpty(Queue* pq) {
//	assert(pq);
//	return pq->phead == NULL
//		&& pq->ptail == NULL;
//}
