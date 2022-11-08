#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include <time.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);}
}
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void line (int x);
char press =0;
char line_name[3][8] ={"menu","display","list"};
int main()
{
    int lined =1;
    line(lined);
    do{
        press =getch();
        // up = 72 , down = 80 , left = 75 , right = 77
        if(press==-32){
                press=getch();
                switch(press){
                 case 72:
                     lined--;
                     if(lined==0){
                        lined=3;
                     }
                     line(lined);

                     break;
                 case 80:
                     lined++;
                     if(lined>3){
                        lined=1;
                     }
                     line(lined);
                     break;

                 default :
                     system("cls");
                     gotoxy(25,15);
                     printf("please to choice use up arrow and down arrow and enter keys");
                     delay(4);
                     line(lined);
                     break;


                }
        }

        else if (press == 13){
            system("cls");
                     switch(lined){
                         case 1:gotoxy(50,5);
                                break;
                         case 2:gotoxy(50,10);
                                break;
                         case 3:gotoxy(50,15);
                                break;
                     }
                      SetColor(1);
                      printf("%s",line_name[lined-1]);
                      SetColor(15);
                      press=getch();
                      line(lined);
        }
        else {
//            system("cls");
//            gotoxy(50,25);
//            printf("please choice a menu and press enter");
            delay(1);
            line(lined);
        }
    } while(press!=27);
return 0;
}

void line (int x){
    if(x==1)
    {
        system("cls");
        gotoxy(50,0);
        printf("line %d",x);
        gotoxy(50,5);
        SetColor(1);
        printf("%s",line_name[0]);
        SetColor(15);
        gotoxy(50,10);
        printf("%s",line_name[1]);
        gotoxy(50,15);
        printf("%s\n",line_name[2]);
       // printf("\n if you want exit press esc key");
    }
    else if(x==2)
    {
        system("cls");
        gotoxy(50,0);
        printf("line %d",x);
        gotoxy(50,5);
        printf("%s",line_name[0]);
        gotoxy(50,10);
        SetColor(1);
        printf("%s",line_name[1]);
        gotoxy(50,15);
        SetColor(15);
        printf("%s\n",line_name[2]);
        //printf("\n if you want exit press esc key");
    }
    else if(x==3)
    {
        system("cls");
        gotoxy(50,0);
        printf("line %d",x);
        gotoxy(50,5);
        printf("%s",line_name[0]);
        gotoxy(50,10);
        printf("%s",line_name[1]);
        gotoxy(50,15);
        SetColor(1);
        printf("%s\n",line_name[2]);
        SetColor(15);
        //printf("\n\nif you want exit press esc key");
    }

}
