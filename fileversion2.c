 /* C Code to Write characters to a File

Author :- shinde prashant

Copyright :- 2015 */
///to be reviewed

#include<stdio.h>

#include<conio.h>

int main()

{

FILE *fp;

char ch;

//clrscr();

fp=fopen("D:\\my_nam","w");

printf("Enter Character Until you want and If you want to Quit press q ");

while(1)

{

scanf("%c",&ch);

fputc(ch,fp); //used for writing a character to the output stream

if(ch=='q')

break;

}

fclose(fp);

getch();

}
