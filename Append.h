#pragma once
#include"BinaryTree.h"
#include"PriorityQueue.h"

void Append(PriorityQueue *PQ, BinaryTree *x);

void AdjustUp(BinaryTree* heap, int current);
void AdjustDown(BinaryTree *heap,int current,int border);
void Serve(PriorityQueue* PQ, BinaryTree* bt);