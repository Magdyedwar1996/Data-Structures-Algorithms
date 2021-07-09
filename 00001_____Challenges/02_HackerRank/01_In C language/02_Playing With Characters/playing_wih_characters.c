#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
char ch , s[10] , sen[100];
//printf("Enter a character : ");
scanf("%c",&ch);

//printf("Enter a string : ");
scanf("%s",&s);

//printf("Enter a sentence : ");
scanf("\n");
scanf("%[^\n]%*c", &sen) ;

printf("%c\n",ch);
printf("%s\n",s);
printf("%s\n",sen);

    return 0;
}
