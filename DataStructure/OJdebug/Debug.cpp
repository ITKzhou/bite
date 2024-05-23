//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "LinkList.h"
//
//
//
//
//struct ListNode* CreatList(struct ListNode* head) {
//    struct ListNode* n1 = (struct  ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n2 = (struct  ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n3 = (struct  ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n4 = (struct  ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* n5 = (struct  ListNode*)malloc(sizeof(struct ListNode));
//    if (n1 == NULL || n2 == NULL || n3 == NULL || n4 == NULL || n5 == NULL) {
//        perror("main malloc fail");
//        exit(-1);
//    }
//
//    n1->val = 7;
//    n2->val = 13;
//    n3->val = 11;
//    n4->val = 10;
//    n5->val = 1;
//
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = n5;
//    n5->next = NULL;
//
//    return head = n1;
//}
//
//
// void SLPrint(struct ListNode* head) {
//    struct ListNode* cur = head;
//    while (cur) {
//        printf("%d -> ", cur->val);
//        cur = cur->next;
//    }
//    puts("NULL\n");
//}