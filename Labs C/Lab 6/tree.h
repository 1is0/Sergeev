#pragma once
#include "stdlib.h"
#include "stdio.h"

#ifndef TREE
#define TREE

typedef struct _tree_item
{
	void* left;
	void* right;
	int data;
}TreeItem;

void TreeInit(TreeItem* item, int data)
{
	item->data = data;
	item->left = NULL;
	item->right = NULL;
}

void AddItem(TreeItem* item, int data)
{
	if (item == NULL)
	{
		item = (TreeItem*)malloc(sizeof(TreeItem));
		((TreeItem*)item)->data = data;
		((TreeItem*)item)->left = ((TreeItem*)item)->right = NULL;
	}
	else
	{
		if (((TreeItem*)item)->data < data)
		{
			if (item->right != NULL)
			{
				AddItem((TreeItem*)item->right, data);
			}
			else
			{
				item->right = (TreeItem*)malloc(sizeof(TreeItem));
				((TreeItem*)item->right)->data = data;
				((TreeItem*)item->right)->left = ((TreeItem*)item->right)->right = NULL;
			}
		}
		else if (((TreeItem*)item)->data > data)
		{
			if (item->left != NULL)
			{
				AddItem((TreeItem*)item->left, data);
			}
			else
			{
				item->left = (TreeItem*)malloc(sizeof(TreeItem));
				((TreeItem*)item->left)->data = data;
				((TreeItem*)item->left)->left = ((TreeItem*)item->left)->right = NULL;
			}
		}
		else
			printf("Tree item insert fault");
	}
}

void TreeConstruct(TreeItem* item)
{
	int size;
	printf("Set amount of values ");
	scanf_s("%d", &size);
	int temp;
	scanf_s("%d", &temp);
	TreeInit(item, temp);
	for (size_t i = 0; i < size - 1; i++)
	{
		scanf_s("%d", &temp);
		AddItem(item, temp);
	}
}

int FindMax(TreeItem* item)
{
	if (item->right != NULL)
		return FindMax((TreeItem*)item->right);
	else
		return item->data;
}

#endif
