#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x =0;
    int disc=5.0;
    int k=0;
    int y;
  printf("Enter the amount to pay to the shop..:");
  printf("\n");
  scanf("%d", &x);
  printf("%d\n", x);
  int m=x;
  switch (x)
  {
    case 0 ... 10000:
   
     y= m-(disc*m/100); 
     printf("%d\n", m);
    printf("You total cost is %d after a discount of %d%%.\n",y,disc);
    break;
    
   case 10001 ... 100000:
    k=5;
    disc+=k;
     y= m-(disc*m/100); 
     printf("%d\n", m);
    printf("You total cost is %d after a discount of %d%%.\n",y,disc);
    break;

  }
}