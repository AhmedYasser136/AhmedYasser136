#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "emp.h"
#define size 3

int main()
{
    int i=0;
    char press=0 ;
    int arr[size];
    while(press != 27){
        system("cls");
        printf("press N : to enter number \npress D :to desplay all numbers \nesc :to finish");
        press = getch();
        if((press == 'n' || press == 'N')&& i==0){
            system("cls");
            for(i=0;i<size;i++){
                printf("enter your numbers %d :",i+1);
                add(&arr[i]);
            }
        }
        else if (press== 'D' || press =='d'){
            system("cls");
            printf(" your numbers \n");
            for(i=0;i<size;i++){
                diplay(&arr[i]);
            }
            getch();

        }


    }
    return 0;
}

