//---------------------------------------------------------------------------
#pragma hdrstop
#include "StackNumber.h"
StackNumber :: StackNumber()
{
	size = 0;
	pHead = 0;
	pTail = 0;
}

void StackNumber :: Add(float n)
{
	size++;
	NodeNumber *temp = new NodeNumber(n);
	if(pTail == 0) pTail = temp;
	else
	{
		temp->pNext = pTail;
		pTail = temp;
	}
}

float StackNumber :: GetBack()
{
	return pTail->num;
}

float StackNumber:: Delete()
{
	size--;
	NodeNumber *temp = pTail;
	float n = temp->num;
	pTail = pTail->pNext;
	delete temp;
	return n;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
