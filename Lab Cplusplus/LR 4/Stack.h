  
//---------------------------------------------------------------------------
#include "Node.h"
#ifndef StackH
#define StackH
class Stack
{
public:
	Node *pHead, *pTail;
	int size;
	Stack();
	void Add(char c);
    char GetBack();
	char Delete();
};
//---------------------------------------------------------------------------
#endif
