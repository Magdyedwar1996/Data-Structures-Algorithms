#include<iostream>
#include "linkedListFunction.h"
using namespace std; 

class Node {
	public : 
		int Data ; 
		Node *Next ; 	
};

class LinkedList
{
	public : 
		// this pointer points to the first node in the linkedlist 
		Node *Head ;
		// this is the constructor of the LinkedList Class  
		LinkedList()
			{
				Head = NULL ; 
			}
			
			// This function check if the linkedlist is empty of not 
		bool IsEmpty()
		     {
				return (Head == NULL);
			 } 
			
			// this function to insert elements in the beginning of the list  
		void InsertFirst(int NewValue)
		{
				Node *NewNode = new Node(); // create new node of Node Class
				NewNode->Data = NewValue ; 
			
			if(IsEmpty())
				{	
					NewNode->Next = NULL; 
					Head = NewNode ; 	
				}
			else 
				{
					NewNode->Next = Head; 
					Head = NewNode ; 	
				}	
		 }		 	
	
	      // this function to display the elements of the linkedlist 
	      void Display()
	      {
	      	Node* TempPtr ; 
	      	TempPtr = Head ; 
	      	while(TempPtr != NULL)
	      	{
	      		cout << TempPtr->Data <<"  " ; 
	      		TempPtr = TempPtr->Next ; 
			}
	      	
		  }
		  // this function to count how many elements are there in the linkedlist 
		int  Count()
	      {
	      	Node* TempPtr ; 
	      	TempPtr = Head ;
			int count = 0  ;  
	      	while(TempPtr != NULL)
	      	{
	      		count+= 1 ; 
	      		TempPtr = TempPtr->Next ; 
			}
	      	return count ; 
		  }
	
		 // this function finds if an item is there in the list or not 
		bool IsFound(int item)
	      {
	      	Node* TempPtr ; 
	      	TempPtr = Head ; 
	      	while(TempPtr != NULL)
	      	{
	      		if(TempPtr->Data == item ) 
	      			return true ; 
	      		else 
	      			return false ; 
	      		TempPtr = TempPtr->Next ; 
			}
	      	
		  }
	     // This function to insert an item before another item 
	    void InsertBefore(int item , int NewItem)
	    {

		    		Node *NodePtr = new Node();
		    		NodePtr->Data = NewItem ; 
		    		Node *TempPtr ; 
					TempPtr = Head; 
					while(TempPtr->Next->Data != item) 
						{
						   TempPtr = TempPtr->Next ; 
							
						}
					NodePtr->Next  = TempPtr->Next ; 
		    		TempPtr->Next = NodePtr ;	    	
		}
		
		// this function to append and element to the linked list 
		void AppendElement(int item)
			{
				Node *NodePtr = new Node();
				NodePtr->Data = item ;
				Node *Temp = Head ; 
				
				// this condition occurs only once when the list is empty 
				if(IsEmpty())
						{
							NodePtr->Next  = NULL ; 
							Head = NodePtr ; 
							
						}
				
				// this happens only if there is only one item in the list 
				else if (Temp->Next == NULL)
					{
						NodePtr->Next  = NULL ; 
						Temp->Next = NodePtr ; 
					}
				
				// this happens when there is more than one item in the list 
				else 
					{
						while( Temp->Next->Next != NULL)
							{
								Temp  =  Temp->Next ; 	
							}
						NodePtr->Next = NULL ;
						Temp->Next->Next = NodePtr ; 	
					}	
			}
};


int main (void)
{
	
	
	LinkedList  list1 ;  
//	if(list1.IsEmpty())
//		{
//			cout << "The list1 is empty and has no elements" << endl; 	
//		}
   int  item ; 
	while (1)
      	{
			cout << "Enter an Item : ";
			cin >> item ; 
			if(item == -1)
				break ; 
			list1.InsertFirst(item); 
			
		}
	
	list1.Display() ; 
	cout << endl <<endl; 
//	list1.InsertBefore(120,110);
//	list1.InsertBefore(110,100);
//	list1.InsertBefore(100,90);
//	list1.InsertBefore(90,80);
//	list1.InsertBefore(80,70);
//	list1.InsertBefore(70,60);
//	list1.InsertBefore(60,50);
//	list1.InsertBefore(50,40);
    list1.AppendElement(10);
    list1.AppendElement(20);
    list1.AppendElement(30);
    list1.AppendElement(40);
    list1.AppendElement(50);
    list1.AppendElement(60);
	list1.Display() ;
	 
	return 0 ; 
}