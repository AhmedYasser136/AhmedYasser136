#include <stdio.h>
#include <stdlib.h>
int main()
{

    char x [10];
    char y [10];

    printf("int first ");
    scanf("%s", &x);
    printf("int last ");
    scanf("%s", &y);

    printf("full  is %s %s", x, y);
    return 0;
}
