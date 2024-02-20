#include <stdlib.h>
#include <stdio.h>

int main()

{
    int a =434;
    float b=4344.3;
    printf("%lf\n",(double) a + (double ) b ); //explicit cpnversion

    //demonstating iimplicit conversion 
    char number ='k';
    printf("%d\n",number);
    for(size_t i = 0; i < 'z'; i++)
    {
        printf("%c = %d \n",i,i);
    }
}
