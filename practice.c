
/*Write a C Program to  swap two numbers without using 3rd variable */

#include <stdio.h>
#include <conio.h>
 
void main()
{
   int x , y;
 
   printf("Enter value for x and y ");
   scanf("%d %d", &x, &y);
 
   x = x + y;
   y = x - y;
   x = x - y;

   printf("The Value of x and y after swapping");
 
   printf("a = %d ",a);   
   printf("b = %d ",b);
   getch();
}

