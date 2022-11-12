#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "texteditor.h"
#define size 50


 int y=20 ,x=20,i=0;
int main()
{
    char text[size]={'\0'},press=0;
    for(i=0;i<size-1;i++){
        text[i]=' ';
    }
    i=0;
    gotoxy(x,y);
    textattr(240);
    printf("%s ",text);
    textattr(15);
    while(press !=13){

        gotoxy(x,y);
        press=getch();
        if(press==-32){
            press=getch();
            switch(press){
                case 75:
                case 77:
                    move(press,size);
                    break;
                case 71:
                    x=20;
                    i=0;
                    gotoxy(x,y);
                    break;

            }
        }

        else if(press == 8 && x>20){
            i--;
            x--;
            delet(&text[i]);
            system("cls");
            gotoxy(20,20);
            textattr(240);
            printf("%s",text);
            textattr(15);

        }
        else if(press!=8&& press !=13 && i<size){

            edit(&text[i],press);
            i++;
            x++;
            system("cls");
            gotoxy(20,20);
            textattr(240);
            printf("%s",text);
            textattr(15);
        }

    }

         gotoxy(20,30);
         printf("%s\n\n",text);



    return 0;
}


