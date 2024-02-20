/*C Code to Implement Factorial of a Number Entered through Keyboard

Author :- shinde prashant

Copyright :- 2015 */

#include<stdio.h>

#include<conio.h>
int factorial(int x);

int main()

{

int a,fact;

//clrscr();

printf("\n Enter any Number");

scanf("%d",&a);

fact=factorial(a);

printf("Factorial Value =%d",fact);

getch();

}

int factorial(int x)

{

int f;

if(x==1)

return(1);

else

f=x*factorial(x-1);

return(f);

}
