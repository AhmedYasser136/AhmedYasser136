#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int y=0;

    int sum=0,sub=0,mult=0,divi=0;
    char op=0;


    printf("pls input op " );
    op=getchar();



    printf("pls input x " );
    scanf("%d", &x );
    printf("pls input y " );
    scanf("%d", &y );



    switch (op)
    {
    case '+' :
        printf(" sum %d",  x+y );
        break;

    case '-' :
        printf(" sub %d",  x-y );
        break;

    case '*' :
        printf(" mult %d",  x*y );
        break;

    case '/' :
        printf(" divi %d",  x/y );
        break;



    default :
        printf("error");
        break;
    }




    return 0;
}
