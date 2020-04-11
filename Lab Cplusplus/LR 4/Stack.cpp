//---------------------------------------------------------------------------
#pragma hdrstop
#include "Stack.h"
StackOp :: Stack()
{
	size = 0;
	pHead = 0;
	pTail = 0;
}

void Stack :: Add(char c)
{
	size++;
	Node *temp = new Node(c);
	if(pTail == 0) pTail = temp;
	else
	{
		temp->pNext = pTail;
		pTail = temp;
	}
}

char Stack :: GetBack()
{
	return pTail->c;
}

char Stack:: Delete()
{
	size--;
	Node *temp = pTail;
	char n = temp->c;
	pTail = pTail->pNext;
	delete temp;
	return n;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
