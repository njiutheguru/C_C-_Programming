//registers are used for program optimization
#include <stdio.h>
#include <stdlib.h>

//registers cannot be used as global variables
//register int m=54;

int main()
{
    //register int num= 200;//c++ 17 does not allow this results into a soft warning
   // int *ptr1=&num;
   // printf("%d\n",num);
    //printf("%d\n",*ptr1);
    //however the reverse is very true

    int m=22;
    //register int *ptr1=&m;
    printf("%d\n",m);
  //printf("%d\n",*ptr1);

//registers cannot be used with another storage class specifier like static 

//printf("%d\n",m);

//also noter that registers can only be used eithin the local scope od afunction



}
