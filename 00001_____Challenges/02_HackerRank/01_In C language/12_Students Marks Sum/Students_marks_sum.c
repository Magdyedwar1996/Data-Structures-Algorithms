#include <stdio.h>
#include <stdlib.h>
int marks_summation(int* marks, int number_of_students, char gender);
 int sum = 0 ;
int main ()
{
	int number_of_students ; 
	char gender ; 
	scanf("%d",&number_of_students);
	int *marks = (int*) malloc(sizeof(int)*number_of_students);
	for (int i= 0 ; i<number_of_students ; i++)
		{
			scanf("%d",&marks);
			marks++;
		}
	scanf("\n");	
	scanf("%c",&gender);
	printf("%d",marks_summation(marks ,number_of_students ,gender ));
	return 0 ; 
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

int marks_summation(int* marks, int number_of_students, char gender)
 {
	
    if (gender == 'b')
		{
			for (int i =0 ; i<number_of_students ; )
			{
				sum +=marks[i];	
				i+=2;
			}	
		}
	else if (gender == 'g')
		{
			for (int i =1 ; i<number_of_students ;)
			{
				sum +=marks[i];	
				i+=2;
			}
		}
	  
  return sum ;
   
}
