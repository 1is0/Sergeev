#pragma once
#include "tree.h"

typedef struct _node
{
	int toAdd;
	int pos;
	struct _node* prevNode;
	struct _node* nextNode;
}Node;

typedef struct _list
{
	struct _node* head;
	struct _node* tail;
	int size;
}List;

void Initializate(List* list)
{
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
}

void push_front(List* list, int pos, int toAdd)
{
	if (!list->size)
	{
		Node* node = (Node*)malloc(sizeof(Node));
		node->pos = pos;
		node->toAdd = toAdd;
		list->head = list->tail = (void*)node;
		node->nextNode = NULL;
		node->prevNode = NULL;
		list->size = 1;
	}
	else
	{
		Node* node = (Node*)malloc(sizeof(Node));
		node->pos = pos;
		node->toAdd = toAdd;
		Node* tempHead = (Node*)list->head;
		list->head = (void*)node;
		tempHead->prevNode = (void*)node;
		node->nextNode = tempHead;
		node->prevNode = NULL;
		list->size++;
	}
}

void push_back(List* list, int pos, int toAdd)
{
	if (!list->size)
	{
		Node* node = (Node*)malloc(sizeof(Node));
		node->pos = pos;
		node->toAdd = toAdd;
		list->head = list->tail = (void*)node;
		node->nextNode = NULL;
		node->prevNode = NULL;
		list->size = 1;
	}
	else
	{
		Node* node = (Node*)malloc(sizeof(Node));
		node->pos = pos;
		node->toAdd = toAdd;
		Node* tempTail = (Node*)list->tail;
		list->tail = (void*)node;
		tempTail->nextNode = (void*)node;
		node->prevNode = tempTail;
		node->nextNode = NULL;
		list->size++;
	}
}

void pop_front(List* list)
{
	if (list->size != 1)
	{
		Node* newHead = ((Node*)list->head)->nextNode;
		free(list->head);
		list->head = (void*)newHead;
		(list->head)->prevNode = NULL;
		list->size--;
	}
	else
	{
		free(list->tail);
		list->tail = list->head = NULL;
		list->size--;
	}
}

void pop_back(List* list)
{
	if (list->size != 1)
	{
		Node* newTail = ((Node*)list->tail)->prevNode;
		free(list->tail);
		list->tail = (void*)newTail;
		(list->tail)->nextNode = NULL;
		list->size--;
	}
	else
	{
		free(list->tail);
		list->tail = list->head = NULL;
		list->size--;
	}
}

void insert(List* list, int it, int pos, int toAdd)
{
	if (!list->size)
	{
		Node* node = (Node*)malloc(sizeof(Node));
		node->pos = pos;
		node->toAdd = toAdd;
		list->head = list->tail = (void*)node;
		node->nextNode = NULL;
		node->prevNode = NULL;
		list->size = 1;
	}
	else
	{
		Node* node = (Node*)malloc(sizeof(Node));
		int i;
		node->pos = pos;
		node->toAdd = toAdd;
		void* currentPtr;
		if (it < (list->size / 2))
		{
			currentPtr = list->head;
			for (i = 0; i < it; ++i)
				currentPtr = ((Node*)currentPtr)->nextNode;
			((Node*)((Node*)currentPtr)->prevNode)->nextNode = (void*)node;
			((Node*)currentPtr)->prevNode = (void*)node;
			list->size++;
		}
		else
		{
			currentPtr = list->tail;
			for (int i = list->size - 1; i > it; --i)
				currentPtr = ((Node*)currentPtr)->prevNode;
			((Node*)((Node*)currentPtr)->nextNode)->prevNode = (void*)node;
			((Node*)currentPtr)->nextNode = (void*)node;
			list->size++;
		}
	}
}

Node at(List* list, int it)
{
	void* currentPtr;
	if (it < (list->size / 2))
	{
		currentPtr = list->head;
		for (int i = 0; i < it; ++i)
			currentPtr = ((Node*)currentPtr)->nextNode;
	}
	else
	{
		currentPtr = list->tail;
		for (int i = list->size - 1; i > it; --i)
			currentPtr = ((Node*)currentPtr)->prevNode;
	}
	return *((Node*)currentPtr);
}


void ListDestroy(List* list)
{
	while (list->size)
		pop_back(list);
}
