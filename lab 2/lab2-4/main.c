#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;



printf("pls input x " );
scanf("%d" , &x );



 if (x>0 && x<50)
 {
     printf("Fail ", x);

 }










 else if   (x>=50 && x<65)

 {
     printf("pass " ,x);
 }



   else if   (x>65 && x<=75)

 {
     printf("very Good " ,x);
 }

  else if   (x>75 && x<=100)

 {
     printf("Excellent " ,x);
 }

else

        printf("Error " );

    return 0;
}
