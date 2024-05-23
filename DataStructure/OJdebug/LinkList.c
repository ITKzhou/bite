#define _CRT_SECURE_NO_WARNINGS 1

#include "LinkList.h"



///@Time    :

///@Problem : 随机链表的复制
///                                                                           
///      https://leetcode.cn/problems/copy-list-with-random-pointer/description/                                                                      
///————————————————————————————————————————————————————————————————————————————            
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
//    //遍历链表，依次拷贝每一个结点，链接到相应结点之后
//    struct Node* cur = head;
//    while (cur) {
//        struct Node* next = cur->next;
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        if (copy == NULL) {
//            perror("copyRandomList malloc fail");
//            exit(-1);
//        }
//        copy->val = cur->val;
//        //尾插
//        cur->next = copy;
//        copy->next = next;
//        //继续遍历，跳过拷贝的结点
//        cur = next;
//    }
//    //拷贝相应结点的random
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
//    //拆解原链表，把拷贝的结点抽离出来尾插到新的链表
//    struct Node* newhead = NULL, * newtail = NULL;
//    cur = head;
//    while (cur) {
//        struct Node* copy = cur->next;
//        struct Node* next = copy->next;
//        if (newtail == NULL) {
//            newhead = newtail = copy;
//        }
//        else {//尾插
//            newtail->next = copy;
//            newtail = copy;
//        }
//        cur->next = next;
//        cur = copy->next;
//    }
//    return newhead;
//}
//
/////  时间复杂度： O()                                                            
/////  空间复杂度： O()                                                                        
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


///————————————————————————————————————————————————————————————————————————————  




///@Time    :

///@Problem : 合并两个有序链表
///                                                                           
///    https://leetcode.cn/problems/merge-two-sorted-lists/description/                                                                        
///————————————————————————————————————————————————————————————————————————————            
///@Codeing :
///                                                                           
/// 此题可以先创建一个空链表，然后依次从两个有序链表中选取最小的进行尾插操作进行合并。                                                                                                                                                       
///****************************************************************************          

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    if (list1 == NULL) {
//        return list2;
//    }
//    else if (list2 == NULL) {
//        return list1;
//    }
//    //创建一个空链表
//    struct ListNode* head = NULL, * tail = NULL;
//    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    if (head == NULL) {
//        perror("malloc fail");
//        exit(-1);
//    }
//    tail->next = NULL;
//    //遍历两链表
//    while (list1 && list2) {
//        //取小的尾插到head
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
//        //把剩余的结点一并尾插
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

///  时间复杂度： O()                                                            
///  空间复杂度： O()                                                                        

///————————————————————————————————————————————————————————————————————————————  



