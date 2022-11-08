#include <stdio.h>
#include <stdlib.h>

int main()
{
float x ;
float y ;
float divi;
int mod;



printf("inter num x :");
scanf("%f" , &x);

printf("inter num y :" );
scanf("%f" , &y);


 mod=(int)x%(int)y;
 divi=x/y;


 printf("\nthe mult is : %d" , mod );
 printf("\nthe divi is : %f" , divi );
    return 0;
}
