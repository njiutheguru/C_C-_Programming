#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a,b;
    int great=0,small=0;

    printf("\n Enter two numbers: ");
     
     scanf("%d%d", &a,&b);

     if(a>b)
     {
        great=a;
        small=b;
     }
     else{
        great=b;
        small=a;
     }
     for(int i=small;i>=1;i--)
     
     {

       if(great%i==0&& small%i==0)
       {
            printf("\n The gcd of the two numbers is %d ", i);
            break;
       }

     }






}
