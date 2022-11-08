#include <stdio.h>
#include <stdlib.h>
typedef struct Emp_Struct
{
    int ID;
    char name[20];
    int salary;
    int bouns;
    int Deduction;


} Emp_Struct;
int main()
{
    Emp_Struct emp1= {5001,"Ahmed Yasser",6000,0,0};
    int i=0;
    printf("ID : %d\n",emp1.ID);
    printf("NAME : %s\n",emp1.name);
    printf("SALARY : %d",emp1.salary);



}
