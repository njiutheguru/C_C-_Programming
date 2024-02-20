 #include<stdio.h>

#include<string.h>

#include<stdlib.h>

int main(void)

{

char *p;

//clrscr();

p = (char *) malloc(15*sizeof(char));

strcpy(p, "Hello World !");

printf("\n String is [%s] Address is %u", p, p);
printf("\n the size of the string is %d bytes\n",sizeof(p));

p = (char *) realloc(p,30*sizeof(char));

printf("\n String is [%s] New address after reallocation is %u", p, p);
printf("\n the size of the string is %d bytes\n",sizeof(p));

free(p);

//getch();

}
