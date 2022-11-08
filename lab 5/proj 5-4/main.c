#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#define lines 3
#define max 3

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
typedef struct Employee {
    int ID;
    char name[15];
    int salary;
    int bouns;
    int Deduction;

}Employee;
Employee AddNewEmployee();
void diplay (Employee * emp,int);
void menu_emp(int line);
char menu[lines][8]={"ADD","DISPLAY","EXIT"};
int main()
{

    int line=1,i=0,flag=0;
    printf("enter max number of employee :");
    Employee emp [max];
    char press=0;

    do{
        menu_emp(line);
        press=getch();
        if(press==-32){
            press=getch();
            switch(press){
            case 72:
                line--;
                if(line<=0){
                    line=3;
                }
                break;
            case 80:
                line++;
                if(line>lines){
                    line=1;
                }
                break;
            default :
                system("cls");
                gotoxy(25,15);
                printf("please to choice use up arrow and down arrow and enter keys");
                delay(4);
                menu_emp(line);
                break;

            }
            menu_emp(line);
        }
        else if(press == 13){
            system("cls");
            switch (line){
                case 1:
                  if(i < max){
                      emp[i]=AddNewEmployee();
                      i++;

                  }
                  else{
                      system("cls");
                      printf("you reach maxmum numebr of employee ");
                      delay(2);
                  }
                  break;
                 case 2 :
                     diplay(emp,i);
                     menu_emp(line);
                     break;
                 case 3 :
                      flag=1;
                      break ;
                 default :
                    menu_emp(line);
                    break;
            }
            }



    }while(flag==0);
    return 0;
}
void menu_emp(int line){
    system("cls");
    for(int i=1 ; i<=lines ; i++){
        if(i==line){
            SetColor(1);
            printf("%s\n",menu[i-1]);
            SetColor(15);
        }
        else {
            printf("%s\n",menu[i-1]);
        }
    }

}
Employee AddNewEmployee(){
        system("cls");
        Employee emp;
        printf("ID of emplyee : ");
        scanf("%d",&emp.ID);
        printf("NAME of emplyee : ");
        scanf("%s",emp.name);
        printf("SALARY of emplyee : ");
        scanf("%d",&emp.salary);
        printf("BOUNS of emplyee : ");
        scanf("%d",&emp.bouns);
        printf("Deduction of emplyee :  ");
        scanf("%d",&emp.Deduction);
        return emp;

}
void diplay(Employee * emp,int i){

    printf("num\t\t\tID\t\t\tname\t\t\tsalary\t\t\tbouns\t\t\tDeduction");
    for(int j=0;j<i;j++){
        delay(1);
        printf("\n%d\t\t\t%d\t\t\t",j+1,emp[j].ID);
        printf("%s\t\t\t",emp[j].name);
        printf("%d\t\t\t",emp[j].salary);
        printf("%d\t\t\t",emp[j].bouns);
        printf("%d",emp[j].Deduction);

    }
    getch();
}
