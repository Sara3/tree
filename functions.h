//---------------------------------------------------------
// File--------main.cpp
// Programmer--Sabera Daqiq
//
// This program computes the average time a person waits in a queue 
//---------------------------------------------------------
#include <iostream>
#include <queue>
#include <stdlib.h>
using namespace std;

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

struct treeNode{
	int data;
	struct treeNode*left;
	struct treeNode*right;
};
class binarysearchtree{
	private:
		struct treeNode*root;
		void insert(treeNode*&root, int item);
		bool search(treeNode*root, int target);
		void show(treeNode*root);
	public:
		void show();
		binarysearchtree();
		void insert(int item);
		bool search(int target);
		bool isEmpty();
};
#endif
