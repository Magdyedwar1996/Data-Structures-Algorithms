#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
    int   MAX_AND =0 ;
    int MAX_OR = 0 ;
    int  MAX_XOR = 0 ;
  for (int i = 1 ; i <=k ; i++)
  {

     for (int j = i+1 ; j<= n; j++)
     {
         int and = i & j ;
         int or = i | j ;
         int xor = i ^ j ;

       if ((and > MAX_AND ) && (and < k))
       {
           MAX_AND = and ;
       }

       if ((or > MAX_OR) && (or < k ))
       {
           MAX_OR = or ;
       }

       if ((xor > MAX_XOR) && (xor < k ) )
       {
         MAX_XOR = xor ;
       }
     }

  }
     printf("%d\n",MAX_AND);
    printf("%d\n",MAX_OR);
    printf("%d\n",MAX_XOR);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
