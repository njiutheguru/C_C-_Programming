// C program of nested function
// with the help of gcc extension
#include <stdio.h>
int main(void)
{
	auto int view() //resulted to error 
    
    {
        printf("View\n");
    }
    // declare function with auto keyword
	view(); // calling function

	printf("Main\n");

	printf("GEEKS");
	return 0;
}
