#include<stdio.h>

void swap(int, int);

int main()
{
    int a = 0;
    int b = 0;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    swap(a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp;

    temp = x;
    x    = y;
    y    = temp;

    printf("\n After swapping: a = %d \n      \t         b = %d\n ", x, y);
}
