#include stdio.h
#include string.h
#include math.h
#include stdlib.h

int main()
{
    int INT_Number_1 , INT_Number_2 ; 
	float FLOAT_Number_1 , FLOAT_Number_2;
    scanf(%d%d,&INT_Number_1, &INT_Number_2);
    scanf(%f%f,&FLOAT_Number_1, &FLOAT_Number_2);
    printf(%d %dn,INT_Number_1+INT_Number_2 ,INT_Number_1-INT_Number_2 );
    printf(%.1f %.1f,FLOAT_Number_1+FLOAT_Number_2 ,FLOAT_Number_1-FLOAT_Number_2 );

    
    return 0;
}
