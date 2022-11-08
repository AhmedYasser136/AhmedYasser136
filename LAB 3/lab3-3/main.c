#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

int main()
{
    int row =1;
    int i=1;
    int size=1;
    int col =(size+1)/2;
    char flag=0;
    do
    {
        printf ("Enter the Size of the magic box\n");
        scanf ("%d", &size);
        if (size % 2 == 0)
        {
            flag=1;
            printf("This is an Even No., enter an Odd No.\n\n");
        }
        else
        {
            flag=0;
            system("clS");
            int max = size*size;
            for(i=1; i<=max; i++)
            {
                gotoxy(row*5,col);
                printf ("%5d",i);
                if (i%size==0)
                {
                    col ++;
                }
                else
                {
                    row--;
                    col--;
                    if (col == 0)
                    {
                        col =size;
                    }
                    if (row == 0)
                    {
                        row =size;
                    }
                    printf ("\n");
                }
                delay (1);
            }
        }
        printf ("\n\n\n\n");
    }

    while (flag==1);
    return 0;
}
