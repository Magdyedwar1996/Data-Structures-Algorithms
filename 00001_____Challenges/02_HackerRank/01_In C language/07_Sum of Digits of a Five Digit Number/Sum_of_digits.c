#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, sum=0;
    scanf("%d", &n);
    for (int i =0 ; i<5; i++)
    {
        int remainder;
         remainder = n%10;
           n = n/10 ;
        sum +=remainder ;
    }
    printf("%d",sum);



    return 0;
}
