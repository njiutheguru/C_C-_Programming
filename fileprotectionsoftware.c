 #include<stdio.h>

#include<conio.h>

int main()

{

int i, x[10]={ 12,123,324,566,554,343,211,267,991,110 };

//clrscr();

//gotoxy(10,10);

printf("FOllowing is the Memory Map for Initialized Array !");

for(i=0;i<10;i++)

{

printf("\n Variable x[%d] Value %d Memory Address %p",i,x[i],&x[i]);

}

printf("\n %d",x[2]);

printf("\n %d",x[5]);

getch();

}