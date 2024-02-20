// imiplementation of funtion pointers array
//a pointer to store an array of functions

#include <stdio.h>
#include <stdlib.h>

void add(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a + b);
}
void subtract(int a, int b)
{
    printf("%d - %d = %d\n", a, b, a - b);
}
void multiply(int a, int b)
{
    printf("%d * %d = %d\n", a, b, a * b);
}
void strings(int a, int b)
{
    printf("A + B is %c ",a+b);
}

int main()
{
    int a=32, b=40;
    int j;
    //function  pointer array are of type void they can perform any operation
   void (*functionptr[])(int, int)= {add, subtract, multiply,strings}; //here function pointers are used instead of switch statements
   //(*functionptr[]) executes a function depending on the index of the array in which it is  placed
    printf("Enter 0 for PRODUCT, 1 FOR ADDITION, 2 FOR SUBTRACTION and 3 for Addition of strings using ASCII : ");
    scanf("%d",&j);
    functionptr[j]( a,  b); //works perfecly 

    return 0;

}