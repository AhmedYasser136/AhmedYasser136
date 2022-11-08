#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    x=getch();

    if (x==-32)
    {
        printf("Extended key ");
        x=getch();
        printf("%d", x);

    }
    else
    {
        printf("Normal KEY ");
    }
    return 0;
}
