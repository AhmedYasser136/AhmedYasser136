#include <stdio.h>
#include <stdlib.h>
#define size 50

int main()
{

    char ma_arr[size],cl_arr[size] = {'\0'};
    int c = 0 ;
    printf("plz enter a random string\n");
    gets(ma_arr);
    while(ma_arr[c] != '\0')
    {
        if (ma_arr[c] >= 'a' && ma_arr[c]<= 'z')
        {
            cl_arr[c] = ma_arr[c];
        }
        c++ ;
    }
    printf("\nThe alphabatic array is: %s",cl_arr);


    return 0;
}
