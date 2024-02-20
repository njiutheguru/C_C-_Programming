/*C Code to write to a File in Binary Mode

Author :- Shinde Prashant

Copyright :- 2015 */

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

struct student s;

FILE *fp;

char ch;

//clrscr();

fp=fopen("D:/student1.dat","wb+");

while(1)

{

printf("\n Enter Name,roll_no,marks of student\n : ");

scanf("%s %d %d",s.name,&s.roll_no,&s.marks);

fwrite(&s,sizeof(s),1,fp);

printf("Do you want to add another record y or n ");

fflush(stdin);

scanf("%c",&ch);

if(ch=='n')

break;

}

fclose(fp);

}