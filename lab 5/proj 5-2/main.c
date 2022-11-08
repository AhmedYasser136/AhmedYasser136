#include <stdio.h>
#include <stdlib.h>
#define size 5
typedef struct EmpArr_of_Struct{
    int ID;
    char name[15];
    int salary;
    int bouns;
    int Deduction;


}EmpArr_of_Struct;

int main()
{
    int i=0;
    EmpArr_of_Struct emp[size];
    for(i=1;i<=size;i++){
        printf("ID of emplyee %d : ",i);
        scanf("%d",&emp[i].ID);
        printf("NAME of emplyee %d : ",i);
        scanf("%s",&emp[i].name);
        printf("SALARY of emplyee %d : ",i);
        scanf("%d",&emp[i].salary);
        printf("BOUNS of emplyee %d : ",i);
        scanf("%d",&emp[i].bouns);
        printf("Deduction of emplyee %d :  ",i);
        scanf("%d",&emp[i].Deduction);
    }
    for(i=1;i<=size;i++){
        printf("ID of emplyee %d :%d \n",i,emp[i].ID);
        printf("NAME of emplyee %d :%s \n",i,emp[i].name);
       printf("SALARY of emplyee %d :%d \n",i,emp[i].salary);
       printf("BOUNS of emplyee %d :%d \n",i,emp[i].bouns);
       printf("Deduction of emplyee %d :%d \n",i,emp[i].Deduction);
    }
    return 0;
}
