#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int strlength(char *s1)
{

 int i=0;

	 for(;*s1!='\0';s1++)
	 i++;


  return i;
}

void main()
{

 clrscr();
 char s1[20];
 gets(s1);

 cout<<"\nLength  of the string : "<<strlength(s1);
 getch();

}