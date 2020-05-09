//---------------------------------------------------------------------------1
#ifndef MapH
#define MapH

//---------------------------------------------------------------------------
#endif


class Node
{
public:
	AnsiString info;
	int key;
	int count;
	Node* pNext;

	Node(int key,AnsiString value)
	{
	  this->info = value;
	  this->key = key;
	  pNext = nullptr;
	   count = 1;
	}
};


class Map
{
	  Node **arr;
      int capacity;

public:

	Map()
	{
	   capacity = 11;
	   arr = new Node*[capacity];
	   for (int i=0; i<capacity; i++)
	   {
	      arr[i] = NULL;
	   }
	}

	int Code(int Key);
	void INode(int key, AnsiString value);
	void display(TMemo*);
	int pop_key();
	void search(TMemo*, int key);
        void Delete(int key);
};
