#include<stdlib.h>
#include"Append.h"

void AdjustDown(BinaryTree heap[], int current, int border)//向下调整，使得取出元素后调整成最小堆
{
	int p = current;
	int minChild;
	BinaryTree temp;
	while (2 * p + 1 <= border)
	{
		if ((2 * p + 2 <= border) && ((heap[2 * p + 1]).root->w > (heap[2 * p + 2]).root->w))
			minChild = 2 * p + 2;
		else
			minChild = 2 * p + 1;
		if ((heap[p]).root->w <= (heap[minChild]).root->w)
			break;
		else
		{
			temp = heap[p];
			heap[p] = heap[minChild];
			heap[minChild] = temp;
			p = minChild;
		}
	}
}


void AdjustUp(BinaryTree heap[], int current)//向上调整，使得插入元素后调整成最小堆
{
	int p = current;
	BinaryTree temp;
	while (p > 0)
	{
		if ((heap[p]).root->w < (heap[(p - 1) / 2]).root->w)
		{
			temp = heap[p];
			heap[p] = heap[(p - 1) / 2];
			heap[(p - 1) / 2] = temp;
			p = (p - 1) / 2;
		}
		else
			break;
	}
}

void Append(PriorityQueue* PQ, BinaryTree *x)
{
	PQ->bt[PQ->n] = *x;
	(PQ->n)++;
	AdjustUp(PQ->bt, PQ->n - 1);
}

void Serve(PriorityQueue *PQ, BinaryTree *bt)
{
	*bt = PQ->bt[0];
	PQ->n--;
	PQ->bt[0] = PQ->bt[PQ->n];
	AdjustDown(PQ->bt, 0, PQ->n - 1);
}