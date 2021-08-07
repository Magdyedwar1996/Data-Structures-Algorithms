#include <stdio.h>
#include <stdlib.h>

void Add_first(int );
void delete_first(void);
void display(void );
void add_last(int x);
void delete_last();
void find_data(int x) ; 
void DeleteByData(int x );
void DeleteByIndex(int index ) ; 
void AddAtIndex(int x , int index);

struct node 
{
	int data ;
	struct node* next; 	
};
struct node* head = NULL  ; 
struct node* tail = NULL  ; 
void Add_first(int var)
{
	struct node* new = (struct node *) malloc(sizeof(struct node )) ;
	new->data = var;
	
	if (head == NULL )
	{
		new->next = NULL ; 
		head = new ; 
		tail = new ; 
	}
	else 
	{
		new ->next = head; 
		head = new ;
	}
	 	
}

void display()
{
	struct node* ptr = head ;
	while (ptr!=NULL) 
	{ 
		printf("%d\n",ptr->data);
		ptr =ptr->next ; 	
		
	}	
}


void delete_first()
{
	struct node* ptr1 = head ;
	head = head->next ; 
	ptr1->next = NULL ;
	free(ptr1);
	
}



void add_last(int x)
{
		struct node* new = (struct node *) malloc(sizeof(struct node )) ;
		new->data = x;		
	
			ptr1->next = new ; 
			new->next = NULL;
			tail->next = new ; 
	
}

void delete_last()
{

		struct node* ptr1 = head ;
		while(ptr1->next->next !=NULL)
		{
			ptr1=ptr1->next ; 
			
		}
	
	free(ptr1->next);
	ptr1->next= NULL ;
	
}

void find_data(int x)
{
	int i = 0 ; 
	struct node* ptr1 = head ;
	while(ptr1->data != x )
	{
		ptr1=ptr1->next ; 
		i+=1 ; 
		
	}
	printf("The index of %d is : %d\n",x, i);
		
}


void DeleteByData(int x )
{
	struct node* ptr1 = head ;
	struct node* ptr2;
	while(ptr1->next->data != x )
	{
		ptr1=ptr1->next ; 
	
	}
	ptr2 = ptr1->next ; 
	ptr1->next = ptr1->next->next ; 
	ptr2->next= NULL ; 
	free(ptr2);	
}

void DeleteByIndex(int index )
{int i  = 0 ; 
	struct node* ptr1 = head ;
	struct node* ptr2;
	while(i!=index-1)
	{
		ptr1=ptr1->next ; 
	    i+= 1 ; 
	}
	
	
	ptr2 = ptr1->next ; 
	ptr1->next = ptr1->next->next ; 
	ptr2->next= NULL ; 
	free(ptr2);	
}

void AddAtIndex(int x , int index)
{
	int i = 0;
	struct node* NODE = (struct node*)malloc(sizeof(struct node*));
	NODE->data = x ; 
	//struct node* ptr2;
	struct node* ptr1 = head ;
	while(i!=index-1)
	{
		ptr1=ptr1->next ; 
	    i+= 1 ; 
	}
	NODE->next = ptr1->next;
	 ptr1->next = NODE ; 
		
	
}

	
