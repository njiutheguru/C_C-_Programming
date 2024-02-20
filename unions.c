 #include<stdio.h>

#include<conio.h>

#include<string.h>

union student

{

char name[10];

int roll_no;

int marks;

};

int main()

{

union student s;

//clrscr();

printf("The Size of Union is %u bytes",sizeof(s));

strcpy(s.name ,"Prashant");

printf("\n The name is %s",s.name);

s.roll_no=12;

printf("\n The Roll No is =%d",s.roll_no);

s.marks=67;

printf("\n The Marks =%d",s.marks);

getch();

}
