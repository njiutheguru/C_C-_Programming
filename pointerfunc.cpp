// Modified program using pointers

//returning multiple valuues from funtions using pointers 

#include <iostream>
using namespace std;

// add is the short name for address
void compare(int a, int b, int* add_great, int* add_small)
{
	if (a > b) {

		// a is stored in the address pointed
		// by the pointer variable *add_great
		*add_great = a;
		*add_small = b;
	}
	else {
		*add_great = b;
		*add_small = a;
	}
}
void swap(int *num1, int *num2)
{
	*num1=*num1+*num2;
	*num2=*num1-*num2;
	*num1=*num1-*num2;
}

// Driver code
int main()
{
	int great, small, x, y;
	int num1=54, num2=77;
	cout <<" Before " << num1 << endl;
	cout <<num2 << endl;

	swap(&num1, &num2);

	cout <<" After " << num1 << endl;
	cout <<num2 << endl;

	cout << "Enter two numbers: \n";
	cin >> x >> y;
	
	

	// The last two arguments are passed
	// by giving addresses of memory locations
	compare(x, y, &great, &small);
	cout << "\nThe greater number is " << great << " and the smaller number is "
	<< small;

	return 0;
}


