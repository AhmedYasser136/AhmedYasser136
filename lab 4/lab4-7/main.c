#include <stdio.h>
#include <stdlib.h>
#define size 50

int main()
{

    char larr[size];
    int count = 0 ;
    printf("plz enter a string:..\n");
    gets(larr);
    for(int i=0; larr[i] != '\0'; i++)
        count++;
    printf("\nThe length of the array is %d",count);

    return 0;
}
