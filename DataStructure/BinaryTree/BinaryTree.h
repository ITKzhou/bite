#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>
#include "Queue.h"

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BTCreateByPrev(char* a, int* pi);
BTNode* BTCreate(int n);
// ����������
void BTDestory(BTNode** root);
// �������ڵ����
int BTSize(BTNode* root);
// ������Ҷ�ӽڵ����
int BTLeafSize(BTNode* root);
// ��������k��ڵ����
int BTLevelKSize(BTNode* root, int k);
// ���������
int BTHeight(BTNode* root);
int maxDepth(BTNode* root);
// ����������ֵΪx�Ľڵ�
BTNode* BTFind(BTNode* root, BTDataType x);
// ������ǰ����� 
void BTPrevOrder(BTNode* root);
// �������������
void BTInOrder(BTNode* root);
// �������������
void BTPostOrder(BTNode* root);
// �������
void BTLevelOrder(BTNode* root);
void BTDividLevelOrder(BTNode* root);
// �ж϶������Ƿ�����ȫ������
int BTComplete(BTNode* root);


