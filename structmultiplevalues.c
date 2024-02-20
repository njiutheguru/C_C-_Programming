// Modified program using structures
#include <stdio.h>
struct greaterSmaller {
	int greater, smaller;
};

typedef struct greaterSmaller Struct;

Struct findGreaterSmaller(int a, int b)
{
	Struct s;
	if (a > b) {
		s.greater = a;
		s.smaller = b;
	}
	else {
		s.greater = b;
		s.smaller = a;
	}

	return s;
}
void findGreater_Smaller(int a, int b, int arr[])
{
 
    // Store the greater element at
    // 0th index of the array
    if (a > b) {
        arr[0] = a;
        arr[1] = b;
    }
    else {
        arr[0] = b;
        arr[1] = a;
    }
}

// Driver code
int main()
{
	int x, y;
	Struct result; //type struct

	printf(" \n Enter two numbers: \n");
	scanf("%d%d", &x, &y);

	// The last two arguments are passed
	// by giving addresses of memory locations
	result = findGreaterSmaller(x, y);
	printf("\nThe greater number is %d and the"
		"smaller number is %d",
		result.greater, result.smaller);//using the dot operator to refer to the struct members




        //
        //putting the other program here 
         int K, M;
    int arr[2];
 
    printf("Enter two numbers: \n");
    scanf("%d%d", &K, &M);
 
    findGreater_Smaller(K, M, arr); //the trick is to pass an array among the function parameters
 
    printf("\nThe greater number is %d and the "
           "smaller number is %d",
           arr[0], arr[1]);


	return 0;

}
