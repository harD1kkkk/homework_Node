#include "Node.h"
Node::Node()
{
	volume = 0;
	next1 = nullptr;
	next2 = nullptr;
}
Node::Node(int volume, Node* next1, Node* next2)
{
	this->volume = volume;
	this->next1 = next1;
	this->next2 = next2;
}
