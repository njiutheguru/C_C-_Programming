	#include<stdio.h>

#include<conio.h>

int main()

{

FILE *fp;

char ch;

//clrscr();

fp=fopen("D:\\my_name.txt","r");

if(fp==NULL)

{

printf(" The file does not exist !");

}

while(ch!=EOF)

{

ch=fgetc(fp);

printf("%c",ch);

}

fclose(fp);

getch();

}
