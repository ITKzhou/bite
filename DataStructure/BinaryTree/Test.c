#define _CRT_SECURE_NO_WARNINGS 1

#include "BinaryTree.h"



void TestCreatrByPrev(){
	char* a = "ABD##E#H##CF##G##";//ABD##E#H##CF##G##
	int i = 0;
	BTNode* root = BTCreateByPrev(a, &i);

	printf("前序遍历:> ");
	BTPrevOrder(root);
	printf("\n");
	printf("中序遍历:> ");
	BTInOrder(root);
	printf("\n");
	printf("后序遍历:> ");
	BTPostOrder(root);
	printf("\n");
	
	printf("Size=%d\n", BTSize(root));//8
	printf("LeafSize=%d\n", BTLeafSize(root));//4
	printf("LevelKSize=%d\n", BTLevelKSize(root, 3));//4
	printf("Height=%d\n", BTHeight(root));//4
	printf("Depth=%d\n", maxDepth(root));//4

	BTNode* find = BTFind(root, 'E');
	printf("find=%c\n", find->data);//E

	BTDestory(&root);
}


//void TestCreate(){
//	BTNode* node1 = BTCreate(1);
//	BTNode* node2 = BTCreate(2);
//	BTNode* node3 = BTCreate(3);
//	BTNode* node4 = BTCreate(4);
//	BTNode* node5 = BTCreate(5);
//	BTNode* node6 = BTCreate(6);
//	BTNode* node7 = BTCreate(7);
//
//	node1->left = node2;
//	node1->right = node4;
//	node2->left = node3;
//	node4->left = node5;
//	node4->right = node6;
//	node5->right = node7;
//
//	printf("前序遍历:> ");
//	BTPrevOrder(node1);
//
//	printf("\n中序遍历:> ");
//	BTInOrder(node1);
//
//	printf("\n后序遍历:> ");
//	BTPostOrder(node1);
//	printf("\n");
//
//	printf("Size=%d\n", BTSize(node1));//7
//	printf("LeafSize=%d\n", BTLeafSize(node1));//3
//	printf("LevelKSize=%d\n", BTLevelKSize(node1, 3));//3
//	printf("Height=%d\n", BTHeight(node1));//4
//
//
//	BTNode* find = BTFind(node1, 6);
//	printf("find=%d\n", find->data);
//}

int main()
{
	//TestCreate();

	TestCreatrByPrev();


	return 0;
}

