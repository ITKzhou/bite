#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


typedef struct ListNode {
    int val;
    struct ListNode* next;
}ListNode;


//打印链表
void SLPrint(struct ListNode* head);
//创建链表
struct ListNode* CreatList(struct ListNode* head);
