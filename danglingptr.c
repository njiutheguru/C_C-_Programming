//dangling pointers coz of moving out of scope
#include <stdio.h>
#include <stdlib.h>

int* fn()
{
    static int x=54;
    return &x; //returns the address of x to the main func 

}

int main()
{
    int m=577;
    double k=0.434;
    int *local_var= fn(); //stores the address of x returned by the fn() function
    fflush(stdin);

printf("\n %d \n",*local_var); //dereferncing to obtain the value of x returned

int *wild_pointer;
void *voidptr=&m;
printf(" M is : %d\n",m);
printf(" M is : %d\n",*(int*)voidptr);

voidptr=&k;
printf(" K is : %f\n",k);
printf(" K is : %f\n",*(double*)voidptr);


}



