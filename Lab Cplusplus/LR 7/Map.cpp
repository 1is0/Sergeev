//---------------------------------------------------------------------------

#pragma hdrstop


#include "Map.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


int Map::Code(int key)
{
	return key%capacity;
}

void Map::INode(int key, AnsiString surname)
{
	int index = Code(key);

    if(!arr[index])
    {
	arr[index] = new Node(key, surname);
    }

	else
    {
	Node* temp = arr[index];

	while(temp->pNext)
	{
	    temp = temp->pNext;
	}

	temp->pNext = new Node(key,surname);
	arr[index]->count++;
    }


}

void Map::display(TMemo* Memo)
{
    for (int i = 0; i < capacity; i++)
    {
	if(arr[i])
	{
	    AnsiString str = IntToStr(i);
	    str+="-->" + arr[i]->info;
	    if(arr[i]->pNext != NULL)
	    {
		Node *temp = arr[i]->pNext;
		while(temp)
		{
		str+="-->" + temp->info;
		temp = temp->pNext;
		}
	    }
	    Memo->Lines->Add(str);
	}
    }
}

int Map::pop_key()
{
	int Key = 0;
	int max=0;

	for (int i = 0; i<capacity; i++)
	{
	   if(arr[i] && max<arr[i]->count)
	   {
	      max= arr[i]->count;
	      Key = i;
	   }
	}

        return Key;
}

void Map::search(TMemo* Memo, int key)
{
	int index = Code(key);

	if(!arr[index])
	{
	    Memo->Lines->Add("?? ??????? ????? ?????? ?? ????? ?????");
	    return;
	}

	if(arr[index]->key == key)
	{
	   AnsiString mes = IntToStr(index);
	   mes+="-->" + arr[index]->info;
	   if(arr[index]->pNext)
	   {
		   Node* temp = arr[index]->pNext;
	       while(temp)
	       {
		   mes+="-->" + temp->info;
		   temp = temp->pNext;
	       }
	   }

           Memo->Lines->Add(mes);
	}
}

void Map::Delete(int key)
{
    int index = hashCode(key);

	Node* temp = arr[index];
	Node* buf = temp;

     if(temp)
     {
	 if(temp->key==key)
	 {
	     if(!temp->pNext)
	     {
		 arr[index] = temp->pNext;
	     }


	     else
	     {

		while(temp->pNext->pNext)
		{

		    temp = temp->pNext;
		}

		temp->pNext = nullptr;
		/*delete arr[index];
                arr[index] = buf;*/
	     }

	 }
     }

     else
     {
         ShowMessage("???????? ????");
     }
}
