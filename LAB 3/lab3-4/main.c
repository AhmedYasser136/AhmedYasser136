#include <stdio.h>
#include <stdlib.h>

int main()
{
     max_num ();

    return 0;
}


int max_num (){

int x=0;
int y =0;
int z=0;

printf("pls input x " );
scanf("%d", &x );

printf("pls input y " );
scanf("%d", &y );

printf("pls input z " );
scanf("%d", &z );

if (x>y && x>z)
{
    printf("the largest is x  %d", x);
}
else if   (y>x && y>z)
{
    printf("the largest is y %d ",y);
}
else
{
    printf("the largest is z  %d ", z);
}
}
