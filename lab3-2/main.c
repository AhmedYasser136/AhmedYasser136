#include <stdio.h>
#include <stdlib.h>

int main()
{
    char minu;
    printf ("Press h for this choice:hi  \n");
    printf ("Press g for this choice: good\n");
    printf ("Press b for this choice: bye\n");
    minu = getche(minu);
    switch (minu)
    {
    case 'h':
    case 'H' :
        system ("cls");
        printf ("hi \n");
        break;

    case 'g':
    case 'G':
        system("cls");
        printf ("good \n");
        break;

    case 'b':
    case 'B':
        system("cls");
        printf ("bye \n");
        break;

    }
    return 0;
}
