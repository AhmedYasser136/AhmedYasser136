
int cubed (int);

int main()
{
    int x;
    printf ("Enter the No : ");
    scanf ("%d",&x);

    int cu = cubed (x);
    printf ("cube is %d",cu);
    return 0;
}


int cubed (int x)
{
   int result=0;
   result = x*x*x;
   return result;
}
