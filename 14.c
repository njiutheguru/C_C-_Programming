/*WRITE A C COAD TO COMPARE TWO VALUES  */

#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
//clrscr();
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
if(a>b)
printf("a is greater than b");
else if(b>a)
printf("b is greater tha b");
else
printf("a and b are equal");
getch();
}