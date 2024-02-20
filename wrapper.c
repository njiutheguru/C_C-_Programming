// A simple C program to show function pointers as parameter
#include <stdio.h>

// Two simple functions
void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }
void incredecre()
{
    int a=54, b=43;
    int sum= ++a + ++b;
    printf("%d\n", sum);
}

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())//fun is a void funtion pointer
{
	fun();
}

int main()
{
    printf(" \n Hello");
	wrapper(fun1); //funtion pointers enable another funtion to call another funtion
    //calling of funtion inside a funtion 
	wrapper(fun2);
    wrapper(incredecre); 
	return 0;
}
