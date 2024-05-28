#define _CRT_SECURE_NO_WARNINGS 1

#include "BinaryTree.h"





BTNode* BTCreate(int n)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	assert(node);
	node->data = n;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void BTPrevOrder(BTNode* root)
{
	if (root == NULL) 
	{
		printf("# ");
		return;
	}
	printf("%c ", root->data);
	BTPrevOrder(root->left);
	BTPrevOrder(root->right);
}

void BTInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}
	BTInOrder(root->left);
	printf("%c ", root->data);
	BTInOrder(root->right);
}

void BTPostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}
	BTPostOrder(root->left);
	BTPostOrder(root->right);
	printf("%c ", root->data);
}


int BTSize(BTNode* root)
{
	return root == NULL ? 0 :
		BTSize(root->left) +
		BTSize(root->right) + 1;
}


int BTLeafSize(BTNode* root)
{
	if (root == NULL) {
		return 0;
	}
	if (root->left == NULL && root->right == NULL) {
		return 1;
	}
	return BTLeafSize(root->left)
		+ BTLeafSize(root->right);

}

int BTLevelKSize(BTNode* root, int k)
{
	assert(k > 0);
	if (root == NULL) {
		return 0;
	}
	if (k == 1) {
		return 1;
	}
	return BTLevelKSize(root->left, k - 1) 
		+ BTLevelKSize(root->right, k - 1);
}

int BTHeight(BTNode* root)
{
	if (root == NULL) {
		return 0;
	}
	return (int)fmax(BTHeight(root->left), BTHeight(root->right)) + 1;
}

int maxDepth(BTNode* root)
{
	if (root == NULL) {
		return 0;
	}
	int left = maxDepth(root->left) + 1;
	int right = maxDepth(root->right) + 1;
	if(left > right) {
		return left;
	}
	return right;
}

void BTDestory(BTNode** root)
{
	if (*root == NULL) {
		return; 
	}
	BTDestory(&(*root)->left);
	BTDestory(&(*root)->right);
	free(*root);
	*root = NULL;
}

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BTCreateByPrev(char* a, int* pi)//下标用指针，确保在递归时下标的变化跟递归前保持一致
{
	assert(a);
	if (a[*pi] == '#') {
		(*pi)++;
		return NULL;
	}
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	if (root == NULL) {
		perror("malloc fail");
		exit(-1);
	}
	root->data = a[(*pi)++];
	root->left = BTCreateByPrev(a, pi);
	root->right = BTCreateByPrev(a, pi);
	return root;
}

BTNode* BTFind(BTNode* root, BTDataType x)
{
	if (root == NULL) {
		return NULL;
	}
	if (root->data == x) {
		return root;
	}
	BTNode* ret1 = BTFind(root->left, x);
	if (ret1)
		return ret1;
	BTNode* ret2 = BTFind(root->right, x);
	if (ret2)
		return ret2;

	return NULL;
}


void BTLevelOrder(BTNode* root)
{

}

int BTComplete(BTNode* root);