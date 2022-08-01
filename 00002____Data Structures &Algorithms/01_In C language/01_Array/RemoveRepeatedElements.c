//this function remove the repeated elements of a sorted array 
// Using Extra Space
#include <stdio.h>
#define N   14
int* RemoveRepeatedElements(int* ptr ,int n);
int j = 0 ; 

int main(void)
{
	int array[]={1,1,2,2,3,3,3,3,4,4,5,6,6,7};
	int *ptr = RemoveRepeatedElements(array , N);
	for (int i=0; i<=j ; i++)
	{
		printf("%d ",ptr[i]);
	}
}
int* RemoveRepeatedElements(int * ptr , int n )
{
	static int  temp[N];
	for (int i = 0 ; i < n-1; i++)
	{
		if ( ptr[i] != ptr[i+1])
		{
			temp[j] = ptr[i];
			j++;
		}		
	}
		temp[j] = ptr[n-1]	;
	
	return temp ; 
}