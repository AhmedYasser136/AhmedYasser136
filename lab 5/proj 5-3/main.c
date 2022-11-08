#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
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
typedef struct Employee {
    int ID;
    char name[15];
    int salary;
    int bouns;
    int Deduction;

}Employee;
Employee AddNewEmployee();
void DisplayEmployee(Employee emp);
int main()
{
int max=0,i=0,idd=0,j=0,flag=1;
char press=0;
printf("enter max number of employee :");
scanf("%d",&max);
Employee emp [max];
i=0;
do{
    system("cls");
    printf("press N : add new employee \npress D :display an employee \npress esc : exit ");
    fflush(stdin);
    press =getch();
    if((press == 'n'|| press=='n')&& i< max)
    {
       emp[i] = AddNewEmployee();
       i++;
    }
    else if((press == 'n'|| press=='n')&& i==max){
        system("cls");
        printf("you reach maxmum numebr of employee ");
        delay(2);

    }
    else if(press == 'd' || press=='D'){
        j=0;
        flag=1;
        system("cls");
        printf("enter employee ID ");
        scanf("%d",&idd);

        while(flag !=0){
            if(emp[j].ID ==idd ){
                DisplayEmployee(emp[j]);
                flag=0;
            }
            else if(j==i){
                flag=0;
            }
            else{
                j++;
            }
        }


    }

}while(press != 27);
return 0;
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
void DisplayEmployee(Employee emp){
        system("cls");
        printf("ID of emplyee : %d \n",emp.ID);
        printf("NAME of emplyee : %s \n",emp.name);
        printf("SALARY of emplyee : %d \n",emp.salary);
        printf("BOUNS of emplyee : %d \n",emp.bouns);
        printf("Deduction of emplyee :%d \n",emp.Deduction);

        getch();

}
