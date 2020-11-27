#include<stdio.h>
#include<stdlib.h>
#include"Append.h"
#include"BinaryTree.h"
#include"CreateBinaryTree.h"
#include"CreatePQ.h"
#include"PriorityQueue.h"

BinaryTree CreateHFMTree(int w[], int m);
void PreOrderTree(BinaryTree* bt);
void PreOrder(BTNode* t);
void PreOrderQueue(PriorityQueue* PQ)
{
	for (int i = 0; i < 5; i++)
		printf("%d", PQ->bt[i].root->w);
}


int main()
{
	int m;
	scanf_s("%d", &m);
	int* w;
	w = (int*)malloc(m*sizeof(int));
	for (int i = 0; i < m; i++)
		scanf_s("%d", &w[i]);
	BinaryTree t=CreateHFMTree(w, m);
	PreOrderTree(&t);
	return 0;
}

BinaryTree CreateHFMTree(int w[], int m)
{
	priorityQueue PQ;
	BinaryTree x, y, z, a, b;
	Create(&x);
	Create(&y);
	Create(&z);
	Create(&a);
	Create(&b);
	CreatePQ(&PQ, m);
	for (int i = 0; i < m; i++)
	{
		MakeTree(&x, 'A',w[i],&a, &b);
		Append(&PQ, &x);
	}
	while (PQ.n>1)
	{
		Serve(&PQ, &x);
		Serve(&PQ, &y);
		if (x.root->w < y.root->w)
			MakeTree(&z, 'B', x.root->w + y.root->w, &x, &y);
		else
			MakeTree(&z, 'C', x.root->w + y.root->w, &y, &x);
		Append(&PQ, &z);
	}
	Serve(&PQ, &x);
	return x;
}
void PreOrderTree(BinaryTree* bt)
{
	PreOrder(bt->root);
}

void PreOrder(BTNode *t)
{
	if (!t)
		return;
	printf("%d ",t->w );
	PreOrder(t->lchild);
	PreOrder(t->rchild);
}