//---------------------------------------------------------------------------
#ifndef StackNumberH
#define StackNumberH
#include "NodeNumber.h"
class StackNumber
{
public:
	NodeNumber *pHead, *pTail;
	int size;
	StackNumber();
	void Add(float n);
	float GetBack();
	float Delete();
};
//---------------------------------------------------------------------------
#endif
