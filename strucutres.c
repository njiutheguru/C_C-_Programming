// C program to illustrate the use of structures
#include <stdio.h>

// declaring structure with name str1
struct str1 {
	int i;
	char c;
	float f;
	char s[30];
};

// declaring structure with name str2
struct str2 {
	int ii;
	char cc;
	float ff;
} var; // variable declaration with structure template

// Driver code

 //defining structure
struct str5 {
    int a;
};
  
// defining new name for str1
typedef struct str5 str5;
  
// another way of using typedef with structures
typedef struct str6 {
    int x;
} str6;


int main()
{
	// variable declaration after structure template
	// initialization with initializer list and designated
	// initializer list
	struct str1 var1 = { 1, 'A', 1.00, "GeeksforGeeks" },
				var2;
	struct str2 var3 = { .ff = 5.00, .ii = 5, .cc = 'a' };

	// copying structure using assignment operator
	var2 = var1;

	printf("Struct 1:\n\ti = %d, c = %c, f = %f, s = %s\n",
		var1.i, var1.c, var1.f, var1.s);
	printf("Struct 2:\n\ti = %d, c = %c, f = %f, s = %s\n",
		var2.i, var2.c, var2.f, var2.s);
	printf("Struct 3\n\ti = %d, c = %c, f = %f\n", var3.ii,
		var3.cc, var3.ff);

         str5 var5 = { 20 };
    str6 var6 = { 314 };
  
    printf("var5.a = %d\n", var5.a);
    printf("var6.x = %d", var6.x);

	return 0;
}
