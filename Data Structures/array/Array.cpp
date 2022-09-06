// Assume that integers take 4 bytes.
#include<iostream>
using namespace std;

class Array
{
	private : 
		int size ; 
		int length ; 
		int *ptr ; 

	public : 
	
	// this constructor func to create a new array
	// and as it is a constructor is excuted as we create an object of the class
	Array(int ArraySize)
		{
		 	size = ArraySize ; 
		 	length = 0 ; 
		 	ptr = new int[size];	
		}
	
	
	// this Function to fill the array with elements 
	void FillArray(void)
	{
		int NumberOfItems ; 
		cout << "How many items do you want to fill ?";
		cin >> NumberOfItems ;
		
		// this condition to validate the input of the user 
		if (NumberOfItems > size ){
			cout << "you can't exceed the array size"<<endl; 
			return ; 	
		  }  
		else {
				for(int i = 0 ; i < NumberOfItems ; i++)
			    	{
					cout << "Enter the element #" << i<< " " ; 
					cin >> ptr[i]; 
					length++;	
	       	      }
		}
	
	}


	// this function to Display the array elements 
	void DisplayArray(void)
	{
		cout << "Displaying the array elements : " <<endl; 
		for (int i = 0 ; i < length ; i++)
			{
				cout << ptr[i] << "\t";
			}
			cout << endl; 
		
	}

	// this function to get the length of the array 
	int GetLength(void)
	{
		return length ;
	}
	
	// this function to get the size of the array
	int GetSize(void)
	{
		return size; 
	}

   // this function to search in the array
   int Search(int key){
   	int index = -1 ; 
   	for (int i = 0 ; i < length ; i++){
   		if (key == ptr[i])
   		{
   			index = i ; 
   			break ; 
	   }
		}
   	
   	return index ; 
   	 
   }
	
	// this function to append a new element in the array
	void AppendArray(int NewItem)
	{
		if (length >= size)
		{
			cout << "You can't append as the array is full"<<endl; 
		}
		else 
		{
			ptr[length] = NewItem ; 
			length++;
		}
		}	
	
    // this function to insert an element in an index 
	void InsertElement(int key , int index ){
		if (length < size){
			
			int i = length ;
			for (i ; i > index ; i--)
			{
				ptr[i] = ptr[i -1];
	
			}
				
			ptr[index] = key ; 
			length++; 
	}
		else 
		{
			cout <<"Ther is no enough space to insert this element " <<endl; 
			}	
	}	
	
	// this function to delete an element using its index 
	void DeleteElement(int index)
	{
		if (index < size)
		{
			for (int i = index ; i < length ; i++)
			{
				ptr[i] = ptr[i+1];
				
			}
			length--; 
	
		}
		else 
		{
			cout << "The index you want to delete is out of range" <<endl; 
			}	
		
		
		
		
	}
};



int main()
{
	int size ;
	cout << "Enter the size of the array you want : ";
	cin >> size ; 
	Array MyArray(size); 
	MyArray.FillArray() ; 
	MyArray.DisplayArray(); 
	
	cout << "This the length of the array : "<< MyArray.GetLength() << endl;
    cout <<"This is the size of the array : "<<	MyArray.GetSize() << endl; 
    cout << "There is "<< MyArray.GetSize() - MyArray.GetLength() << " empty spaces in the array"<<endl;
    
	
	int element  ; 
	cout << "Enter the element you want to search : " ;
    cin >> element ; 
    int result = MyArray.Search(element);
    if (result != -1 )
    	cout << "This is the index of the element in the array : "<< result<<endl;
    else 
		cout << "The key you search not found"<<endl;
	
	//////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	int NewItem ; 
	cout << "Enter the element you want to append to the array";
	cin >> NewItem; 	
	MyArray.AppendArray(NewItem);
	MyArray.DisplayArray();
	/////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////
	cout << "Do you want to insert any element in the array :";
	string input ; 
	cin >> input ; 
	if (input == "yes")
	{
		int index , key ; 
		cout << "What elemnt do you want to insert ";
		cin >> key ; 
		cout << "In which index do you want to insert ";
		cin >> index ;  
			MyArray.InsertElement(key,index)	;
	}

	MyArray.DisplayArray();
	//////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////
	cout << "Do you want to delete any element from the array :";
	string input1 ; 
	cin >> input1 ; 
	if (input1 == "yes")
	{
		int index1 ; 
		cout << "What elemnt do you want to delete ";
		cin >> index1 ; 
	MyArray.DeleteElement(index1);			
}
MyArray.DisplayArray(); 
////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

}





