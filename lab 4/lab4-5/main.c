//5 C Program to Find the Frequency of Characters in a String


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    int c = 0;
    int count[26] = {0};
    int x=0;
    printf("Enter a string\n");
    gets(string);
    while (string[c] != '\0')
    {
        if (string[c] >= 'a' && string[c] <= 'z')
        {
            x = string[c] - 'a';
            count[x]++;
        }
        c++;
    }
    for (c = 0; c < 26; c++)
        printf("%c occurs %d times in the string.\n", c + 'a', count[c]);
    return 0;
}
