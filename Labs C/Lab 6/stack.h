#pragma once
#include "tree.h"

typedef struct _stack_node
{
	void* pPrev;
	TreeItem* data;
}StackNode;

typedef struct _stack
{
	void* offsetPtr;
	int size;
}Stack;

void StackInit(Stack* stack)
{
	stack->size = 0;
	stack->offsetPtr = NULL;
}

void push(Stack* stack, TreeItem* data)
{
	StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
	newNode->pPrev = stack->offsetPtr;
	newNode->data = data;
	stack->offsetPtr = newNode;
	stack->size++;
}

void pop(Stack* stack)
{
	if (!stack->size)
		return;
	else
	{
		StackNode* toDelete = (StackNode*)stack->offsetPtr;
		stack->offsetPtr = toDelete->pPrev;
		//free(toDelete);
		stack->size--;
	}
}

TreeItem* peek(Stack* stack)
{
	return ((StackNode*)stack->offsetPtr)->data;
}

void StackDestroy(Stack* stack)
{
	while (stack->size)
		pop(stack);
}
