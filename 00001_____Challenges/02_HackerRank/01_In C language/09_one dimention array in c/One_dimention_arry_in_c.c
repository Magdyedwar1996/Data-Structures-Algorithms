#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int number , sum = 0 ; 
//printf("Enter the number of array  : ");
scanf("%d",&number);
int *arr = (int *) malloc(number * sizeof(int));
//printf("The size of arr is : %d ", sizeof(arr));

for (int i = 0 ; i < number ; i++)
    {
        scanf("%d",arr + i);
    }

for (int i = 0 ; i<number ; i++)
    {
         sum += arr[i]; 
    }
    printf("%d",sum);
    free(arr);
    //printf("The size of arr is : %d ", sizeof(arr));
    return 0;
}