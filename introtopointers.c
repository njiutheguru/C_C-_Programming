#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
// Advanced C Pointers 
//Introduction 
char a[] = {"Hello"};
    void *ptr3 = &a;
    ptr3 = ptr3+1; //4 is the size of int forcing the pointer to look at the next array element
	//this comes with a warning erorr.

    printf("%c \n", *(char *)ptr3);

// C program to illustrate Pointer Arithmetic

	// Declare an array
	int v[3] = { 10, 100, 200 };

	// Declare pointer variable

	// Assign the address of v[0] to ptr
	int *ptr = v;

	for (int i = 0; i < 3; i++) {

		// print value at address which is stored in ptr
		printf("Value of *ptr = %d\n", *ptr);

		// print value of ptr
		printf("Value of ptr = %p\n\n", ptr);

		// Increment pointer ptr by 1
		ptr++;
    }
    return 0;
}
