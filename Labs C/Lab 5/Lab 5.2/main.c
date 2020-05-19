#include "list.h"
#include "stack.h"

int main()
{
	int size;
	printf("list add keys equals to 100 - num of tree\n");
	printf("Set num of trees ");
	scanf_s("%d", &size);
	TreeItem* array = (TreeItem*)calloc(size, sizeof(TreeItem));
	List* treeList = (List*)malloc(sizeof(List));
	Initializate(treeList);
	for (int i = 0; i < size; ++i)
	{
		push_back(treeList, i, 100 - i);
	}
	Stack* treeStack = (Stack*)malloc(sizeof(Stack));
	StackInit(treeStack);
	for (int i = size - 1; i >= 0; --i)
	{
		push(treeStack, array + i);
	}
	for (int i = size - 1; i >= 0; --i)
	{
		TreeConstruct(peek(treeStack));
		AddItem(peek(treeStack), at(treeList, i).toAdd);
		pop(treeStack);
	}
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", FindMax(array + i));
	}
}
