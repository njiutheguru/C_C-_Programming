#include<stdio.h>

#include<conio.h>

void hello_world();

int main()

{

/*Following line is pointer to function */

void (*Hello_ptr)();

//clrscr();

Hello_ptr=&hello_world;

printf("\nThe Address of function display is %u",hello_world);

printf("\n The Address hold by pointer variable is %u",Hello_ptr);

(*Hello_ptr)();

getch();

}

void hello_world()

{

puts("\n Hello World This is the Test !");

}