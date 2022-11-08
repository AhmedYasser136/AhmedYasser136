#include <stdio.h>
#include <stdlib.h>
#include "power.h"

int main()
{
    int x=0,y=0;
    printf("enter base number : ");
    scanf("%d",&x);

    printf("enter power number : ");
    scanf("%d",&y);

    printf("%d ^ %d = %d",x,y,power(x,y));
}

