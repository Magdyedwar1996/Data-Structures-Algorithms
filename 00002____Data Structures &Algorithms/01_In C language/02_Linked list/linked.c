#include <stdio.h>
#include <stdlib.h>
#include "linked.h" 
int main ()
{	

	
	//printf("Adding elements : ")
	Add_first(50);
	Add_first(60);
	Add_first(70);
	Add_first(80);
	
	display();
	
	delete_first();
	delete_first();
	display();
	add_last(100);
    add_last(200);
	add_last(300);
	display();
	delete_last();
	display();
	printf("////////////////////////\n");
   find_data(50);
   add_last(400);
   display();
   find_data(400);
   printf("displaying before deleting by value \n");
   display();
   
   DeleteByData(50);
   printf("displaying after deleting by value \n");
   display();
   add_last(500);
   add_last(800);
   printf("displaying before deleting by index \n");
   display();
   DeleteByIndex(2);
   printf("displaying after deleting by index \n");
     display();
	 
	 //printf("displaying before adding by index\n");
	 //display();
	 AddAtIndex(101 , 3);
	 AddAtIndex(202 , 5);
	 printf("displaying after adding by index\n");
		display();
		add_last(900);
		
	return 0 ; 
}