// A simple C program to demonstrate callback
#include<stdio.h>

void A()
{
	printf("I am function A\n");
}

// callback function
void B(void (*ptr)())
{
	(*ptr) () ; // callback to A
    ptr =&A;
}

int main()
{
    B(A);
       
	//void (*ptr)() ;
	
	// calling function B and passing
	// address of the function A as argument
	//B(ptr);

return 0;
}

