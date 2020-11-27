#pragma once
#include"BinaryTree.h"
typedef struct priorityQueue
{
	BinaryTree* bt;
	int n;
	int maxsize;
}PriorityQueue;