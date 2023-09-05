#pragma once
#include <iostream>
using namespace std;
class Node
{
public:
	int volume;
	Node* next1;
	Node* next2;

	Node();
	Node(int volume, Node* next1, Node* next2);
};