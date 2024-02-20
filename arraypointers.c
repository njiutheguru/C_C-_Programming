#include <stdio.h>
 int main()
 {

int array[]={43,54,6,3,-9,7,-2,5};

int *ptr1=array;
//printing the values of the array using pointer
for(int i=0;i<8;i++)
{
    printf(" Element %d is: %d\n",i+1,*ptr1);
    ptr1++; //this pointer have to be incremented

}
int mybase=54;
int *ptr2=&mybase;
int **ptr3=&ptr2;
int ***ptr4= &ptr3;
int ****kar=&ptr4;

printf("The value of mybase is: %d\n",***ptr4); //54
printf("The value of ptr3 is: %d\n",**ptr3); //54
printf("The value of kar is: %d\n",****kar); //54



    return 0;  
 }