#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int j=0;
    int mul;

    for (i=1; i<=12; i++)
    {
        printf ("\t%d\t\n",i);

        for (j=1; j<=12; j++)
        {
            mul=i*j;
            printf ("%d\t", mul);
        }
        printf ("\n");
    }
    printf ("\n");
    return 0;
}
