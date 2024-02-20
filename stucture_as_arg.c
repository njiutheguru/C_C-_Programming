#include <stdio.h>

#include <conio.h>

struct student

{

char name[20];

int roll_no;

int marks;

};

/* function declaration */

void printstudent( struct student s );

int main( )

{

struct student s1; /* Declare structure variable s to access the structure members*/

printf("Enter student Name,Roll No and Marks ");

scanf("%s %d %d",&s1.name,&s1.roll_no,&s1.marks);

/* Passing the structure variable to function*/

printstudent( s1 );

}

void printstudent( struct student s )

{

printf( "student Name : %s\n", s.name);

printf( "Student Roll No : %d\n",s.roll_no);

printf( "Student Marks : %d\n", s.marks);

}
