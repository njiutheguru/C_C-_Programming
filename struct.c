

#include<stdio.h>
//#include<conio.h>
#include<string.h>

#define MAX 40

typedef struct student 

{

char name[40];

int roll_no;

int marks;



}name;

int main()

{
//int i;
name s[3];
char string[40];

//gotoxy(27,27);

for(int i=0;i<3;i++){
printf(" \nStudent %d: Enter student name: ", i+1);

fgets(string,MAX,stdin);
strcpy(s[i].name,string);

}


for(int i=0;i<3;i++)
{

printf("\n Student %d : Enter Roll No. ,marks of student\n :", i+1);

scanf("%d%d",&s[i].roll_no,&s[i].marks);


//printf("Enter the roll and the marks of student:");


}
//gotoxy(25,25);

for(int i=0;i<3;i++)
{
printf(" \n\n Student %d info \n\nName \t\t %s Roll No \t %d \n Marks \t\t %d",i+1,s[i].name,s[i].roll_no,s[i].marks);
printf("\n");

//getch();
}

}
