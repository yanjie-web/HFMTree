#include<stdio.h>
#include<stdlib.h>
#include"BinaryTree.h"

void Create(BinaryTree* bt)
{
	bt->root = NULL;
}
BTNode* NewNode(ElemType x, int weight, BTNode* ln, BTNode* rn)
{
	BTNode* p = (BTNode*)malloc(sizeof(BTNode));
	p->element = x;
	p->w = weight;
	p->lchild = ln;
	p->rchild = rn;
	return p;
}


void MakeTree(BinaryTree* bt, ElemType e, int weight, BinaryTree* left, BinaryTree* right)
{
	/*if (bt->root || left == right)
		return;*/
	bt->root = NewNode(e, weight, left->root, right->root);
		left->root = right->root = NULL;
}