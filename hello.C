// C program to illustrate the self referential structures
#include <stdio.h>

// structure template
//typedef 
struct str {
	int mem1;
	int mem2;
	struct str* next;
};//str;

// driver code
int main()
{
	str var1 = { 1, 2, NULL };
	str var2 = { 10, 20, NULL };

	// assigning the address of var2 to var1.next
    printf("var1 is : %d\n", var1.mem1);
    printf(" var2 is : %d \n", var2.mem2);

	var1.next = &var2;
    printf("AFTER SWAPPING .... \nvar 2 mem1: %d\n", var1.next->mem1);
    printf("var 2 mem2: %d\n", var1.next->mem2);

	// second level pointer to var1
	struct str *ptr1 = &var1;

	// accessing var2 members using var1
	printf("var2.mem1: %d\nvar2.mem2: %d", ptr1->next->mem1,
		ptr1->next->mem2);

	return 0;
}
