#pragma once
#include<stdlib.h>
typedef char ElemType;
typedef struct btnode
{
	ElemType element;//数据域
	int w;//权值
	struct btnode* lchild;//左孩子
	struct btnode* rchild;//右孩子
}BTNode;

typedef struct binarytree
{
	BTNode* root;//根节点
}BinaryTree;