#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
extern int y,x,i;
void textattr(int ForgC)
{
    //system("COLOR ForgC"); //system("COLOR FC");
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut,ForgC);
}
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void move(char event,int size){
    if(event== 75 && x>20){
    x--;
    i--;
    }
    else if(event== 77 && x<(size+20)){
    x++;
    i++;
    }
}
void edit (char *text,char event){
     *text=event;


}
void delet(char *text){
    char temp=' ';
    int j=0;
    while(*(text+j+1)!='\0'){
     temp=' ';
     *(text+j)=*(text+j+1);
     *(text+j+1)=temp;
     j++;
    }

}


