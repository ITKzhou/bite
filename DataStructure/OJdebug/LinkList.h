#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


typedef struct ListNode {
    int val;
    struct ListNode* next;
}ListNode;


//��ӡ����
void SLPrint(struct ListNode* head);
//��������
struct ListNode* CreatList(struct ListNode* head);
