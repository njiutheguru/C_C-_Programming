#include <stdio.h>

void increase(int *a, int *b)
{
    *a = *a + 1;
    *b = *b + 1;
} 
 int max(int *a, int *b)
 {
    if(*a > *b)
    {
    increase( a, b); //function inside a function ---more research 
    }
    
    return (*a > *b) ? *a : *b;
 }
int main ()
 {
    int a=43, b=443;
    int k=max(&a,&b);
    printf("%d",k);
 }