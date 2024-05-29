#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



typedef char BTDataType;

typedef struct TreeNode
{
	BTDataType val;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;

void Inorder(TreeNode* root)
{
	if (root) {
		Inorder(root->left);
		printf("%c ", root->val);
		Inorder(root->right);
	}
}

TreeNode* CreatBTree(const char* str, int* pi)
{
	if (str[*pi] != '#') {
		//���ǿվʹ��������,��ֵ�Ž�ȥ
		TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
		assert(root);
		root->val = str[*pi];
		++(*pi);
		//��������
		root->left = CreatBTree(str, pi);
		++(*pi);
		//�����ҽ��
		root->right = CreatBTree(str, pi);
		return root;
	}
	else
		return NULL;
}

int main()
{
	char str[101];
	printf("�������ַ���:>\n");
	scanf("%s", str);
	int count = 0;
	TreeNode* root = CreatBTree(str, &count);
	printf("�������:> ");
	Inorder(root);
	printf("\n");
	
	return 0;
}