// trainNode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"

using namespace std;
#define Task 1
int main()
{
#if(Task==1)
	Node* node1 = new Node();

	node1->volume = 1;
	node1->next1 = new Node();
	node1->next2 = new Node();
	node1->next1->volume = 2;
	node1->next2->volume = 4;

	node1->next1->next1 = node1;
	node1->next1->next2 = new Node();
	node1->next1->next2->volume = 3;
	node1->next1->next2->next1 = node1->next1;
	node1->next1->next2->next2 = node1->next2;
	node1->next1->next2->next2->next1 = node1->next1;
	node1->next2->next2 = nullptr;
#elif (Task==2)
	Node* node1 = new Node();

	node1->value = 1;
	node1->next1 = new Node();
	node1->next2 = new Node();
	node1->next1->value = 2;
	node1->next2->value = 3;

	node1->next1->next1 = new Node();
	node1->next1->next2 = node1;
	node1->next1->next1->value = 4;
	node1->next2->next1 = node1->next1;
	node1->next2->next2 = node1->next1->next1;
	node1->next2->next2->next2 = node1->next1;
	node1->next2->next2->next1 = node1; 
#endif
}
