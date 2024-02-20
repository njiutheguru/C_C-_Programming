// C Program to illustrate how passing NULL works
#include <stdio.h>

void foo(int* string)
{
	if (string == NULL) {
		printf("NULL Pointer Passed");
		return;
		
	}
	
			printf(" \n Non-Null Pointer Passed");
		
	
}

int main()
{

	foo(NULL);
	return 0;
}
