#include<stdio.h>

#include<conio.h>

struct student

{

char name[20];

int roll_no;

int marks;

};

int main()

{

struct student *ptr,s;

//clrscr();

ptr=&s; /*assigning the Address of structure variable s to pointer variable ptr */

printf("Enter the Name,roll_no, and Marks of student");

scanf(" %s %d %d",&(*ptr).name,&(*ptr).roll_no,&(*ptr).marks);/*accessing the structure member */

printf("\nName %s ",(*ptr).name);

printf("\nRoll No %d ",(*ptr).roll_no);

printf("\nMarks %d ",(*ptr).marks);

getch();

}
