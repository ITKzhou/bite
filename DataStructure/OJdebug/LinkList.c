#define _CRT_SECURE_NO_WARNINGS 1

#include "LinkList.h"



///@Time    :

///@Problem : �������ĸ���
///                                                                           
///      https://leetcode.cn/problems/copy-list-with-random-pointer/description/                                                                      
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
///@Codeing :
///                                                                           
///                                                                                                                                                        
///****************************************************************************          


//struct Node {
//    int val;
//    struct Node *next;
//    struct Node *random;
//};
// 
//
//struct Node* copyRandomList(struct Node* head) {
//    //�����������ο���ÿһ����㣬���ӵ���Ӧ���֮��
//    struct Node* cur = head;
//    while (cur) {
//        struct Node* next = cur->next;
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        if (copy == NULL) {
//            perror("copyRandomList malloc fail");
//            exit(-1);
//        }
//        copy->val = cur->val;
//        //β��
//        cur->next = copy;
//        copy->next = next;
//        //�������������������Ľ��
//        cur = next;
//    }
//    //������Ӧ����random
//    cur = head;
//    while (cur) {
//        struct Node* copy = cur->next;
//        if (cur->random == NULL) {
//            copy->random = NULL;
//        }
//        else {
//            copy->random = cur->random->next;
//        }
//        cur = copy->next;
//    }
//    //���ԭ�����ѿ����Ľ��������β�嵽�µ�����
//    struct Node* newhead = NULL, * newtail = NULL;
//    cur = head;
//    while (cur) {
//        struct Node* copy = cur->next;
//        struct Node* next = copy->next;
//        if (newtail == NULL) {
//            newhead = newtail = copy;
//        }
//        else {//β��
//            newtail->next = copy;
//            newtail = copy;
//        }
//        cur->next = next;
//        cur = copy->next;
//    }
//    return newhead;
//}
//
/////  ʱ�临�Ӷȣ� O()                                                            
/////  �ռ临�Ӷȣ� O()                                                                        
//
//void SLPrint(struct Node* head) {
//    struct Node* cur = head;
//    while (cur) {
//        printf("%d -> ", cur->val);
//        cur = cur->next;
//    }
//    puts("NULL\n");
//}
//
//int main()
//{
//    struct Node* n1 = (struct  Node*)malloc(sizeof(struct Node));
//    struct Node* n2 = (struct  Node*)malloc(sizeof(struct Node));
//    struct Node* n3 = (struct  Node*)malloc(sizeof(struct Node));
//    struct Node* n4 = (struct  Node*)malloc(sizeof(struct Node));
//    struct Node* n5 = (struct  Node*)malloc(sizeof(struct Node));
//    if (n1 == NULL || n2 == NULL || n3 == NULL || n4 == NULL || n5 == NULL) {
//        perror("main malloc fail");
//        exit(-1);
//    }
//
//	n1->val = 7;
//	n2->val = 13;
//	n3->val = 11;
//	n4->val = 10;
//	n5->val = 1;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = n5;
//	n5->next = NULL;
//
//    n1->random = NULL;
//    n2->random = n1;
//    n3->random = n5;
//    n4->random = n3;
//    n5->random = n1;
//
//    SLPrint(n1);
//
//    struct Node* head = copyRandomList(n1);
//    SLPrint(head);
//
//	return 0;
//}


///��������������������������������������������������������������������������������������������������������������������������������������������������������  




///@Time    :

///@Problem : �ϲ�������������
///                                                                           
///    https://leetcode.cn/problems/merge-two-sorted-lists/description/                                                                        
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
///@Codeing :
///                                                                           
/// ��������ȴ���һ��������Ȼ�����δ���������������ѡȡ��С�Ľ���β��������кϲ���                                                                                                                                                       
///****************************************************************************          

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    if (list1 == NULL) {
//        return list2;
//    }
//    else if (list2 == NULL) {
//        return list1;
//    }
//    //����һ��������
//    struct ListNode* head = NULL, * tail = NULL;
//    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (head == NULL) {
//        perror("malloc fail");
//        exit(-1);
//    }
//    tail->next = NULL;
//    //����������
//    while (list1 && list2) {
//        //ȡС��β�嵽head
//        if (list1->val < list2->val) {
//            tail->next = list1;
//            tail = tail->next;
//            list1 = list1->next;
//        }
//        else {
//            tail->next = list2;
//            tail = tail->next;
//            list2 = list2->next;
//        }
//        //��ʣ��Ľ��һ��β��
//        if (list1) {
//            tail->next = list1;
//        }
//        else {
//            tail->next = list2;
//        }
//    }
//    struct ListNode* list = head->next;
//    free(head);
//    head = NULL;
//    return list;
//}
//
//int main()
//{
//    struct ListNode* head = NULL;
//    struct ListNode* list = CreatList(head);
//
//    SLPrint(list);
//
//	return 0;
//}

///  ʱ�临�Ӷȣ� O()                                                            
///  �ռ临�Ӷȣ� O()                                                                        

///��������������������������������������������������������������������������������������������������������������������������������������������������������  



