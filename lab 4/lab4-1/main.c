#include <stdio.h>
int main()
{
    int  a=0;
    int  b=0;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    a = a - b;
    b = a + b;
    a = b - a;

    printf("After swapping a = %d \n", a);
    printf("After swapping b = %d \n", b);
    return 0
}
