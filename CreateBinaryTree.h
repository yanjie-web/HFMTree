#pragma once
#include"BinaryTree.h"

void Create(BinaryTree* bt);
int Root(BinaryTree* bt, ElemType* x);
BTNode* NewNode(ElemType x, int weight, BTNode* ln, BTNode* rn);
void MakeTree(BinaryTree* bt, ElemType e, int weight, BinaryTree* left, BinaryTree* right);