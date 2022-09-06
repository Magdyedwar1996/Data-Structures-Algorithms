#include <iostream>
#include <string>
using namespace std; 

class Node 
{
	
	public :
		int Data ; 
		Node *Next ; 	
		Node()
		{
			Data = 0 ; 
			Next = NULL ; 
		}	
};

class Stack 
{
	public : 
		Node* Top = NULL ; 
		// This function to push an item to the stack 
		void Push(int item)
			{
				Node* NewNode = new Node(); // create new node
				NewNode->Data = item ;
				if(IsEmpty())
					{
					
						Top = NewNode ;
						NewNode->Next = NULL ;
					}
				else 
					{
						NewNode->Next = Top ; 
						Top = NewNode ; 
						
					}
				
			}
			
		// this function to pop an item from the stack 
		int Pop(void)
			{ 
			int ReturnedItem ; 
				if(IsEmpty())	{
						cout << "The stack is empty and u can't pop any items\n";
					}
				else {
					ReturnedItem = Top->Data ; 
					Top = 	Top->Next  ; 
				}
				
				return ReturnedItem ;			
			}
		
		// This function to display the elements of the Stack	
		void Display(void)
			{
				Node* Ptr = Top ; 
				
				while (Ptr != NULL)
					{
						cout << Ptr->Data << " " ;
						Ptr  = Ptr->Next  ; 
					}					
			}
			
		bool IsEmpty()
			{
			 return (Top == NULL);	
			}		
};
	
int main(void)
	{
		
	  Stack stack1 ; 
	  stack1.Push(10);
	  stack1.Push(20);
	  stack1.Push(30);
	  stack1.Push(40);
	  stack1.Push(50);
	  
	  int item   ; 
	  while (1 )
		  {
		  	  cout << "What elements do you want to push also : ";
			  cin >> item ;
			  if(item == -1 )
			  		break ; 
			  stack1.Push(item);
		  }
  
	stack1.Display() ;
	 
	while ( 1 )
		  {
		  	  string str ;
		  	  cout << "\n Do you want to pop  : ";
			  cin >> str ;
			  if(str == "no" )
			  		break ; 
			  else 		
			  	item = stack1.Pop();
				cout << "The Poped item is : " << item <<endl ; 
		  }
	  
	 stack1.Display() ; 
		return 0 ; 
	}