#pragma once
#include<stdlib.h>
typedef char ElemType;
typedef struct btnode
{
	ElemType element;//������
	int w;//Ȩֵ
	struct btnode* lchild;//����
	struct btnode* rchild;//�Һ���
}BTNode;

typedef struct binarytree
{
	BTNode* root;//���ڵ�
}BinaryTree;