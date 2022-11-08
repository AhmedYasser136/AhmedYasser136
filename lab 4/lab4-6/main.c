#include <stdio.h>
#include <stdlib.h>
#define size 100
int main()
{
    char input_arr[size],cyp_arr[size];
    printf("plz enter a string:..");
    gets(input_arr);
    for(int i=0; input_arr[i] != '\0'; i++)
    {
        cyp_arr[i]= input_arr[i];
    }
    printf("\nThe copied array : %s",cyp_arr);


    return 0;
}
