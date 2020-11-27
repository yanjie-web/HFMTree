#include<stdlib.h>
#include"CreatePQ.h"

void CreatePQ(PriorityQueue *PQ, int m)
{
	PQ->n = 0;
	PQ->maxsize = m;
	PQ->bt = (BinaryTree*)malloc(m * sizeof(BinaryTree));
}