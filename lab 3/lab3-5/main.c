#include <stdio.h>
#include <stdlib.h>
int main()
{
char c ;
printf("pls input alpha " );
c=getchar();

 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
{
    printf ("no alpha %c");
    return 0;
}
}
