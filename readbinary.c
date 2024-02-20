/* C Code to Read a File in Binary Mode with fread()

Author :- shinde prashant

Copyright :- 2015 */

#include<stdio.h>

#include<conio.h>
/////
#include<stdlib.h>

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

fp=fopen("student1.dat","rb");

if(fp==NULL)

{

puts("cant open the file");

exit(1);

}

while(1)

{

/*fread returns o if he can not return any thing from a file*/

ch=fread(&s,sizeof(s),1,fp);

printf("%s %d %d",s.name,s.roll_no,s.marks);

if(ch==0);

break;

}

fclose(fp);

getch();

}
