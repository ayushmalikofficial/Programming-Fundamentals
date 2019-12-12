#include<iostream.h>
#include<conio.h>
#include<stdio.h>


int strcompare(char *s1,char *s2)
{


	for(; *s1!='\0'&& *s2!='\0';s1++,s2++)
	 if(*s1!=*s2)
	  return 0;

	return 1;
}


void main()
{

clrscr();

char s1[20],s2[20];
gets(s1);
gets(s2);
	if(strcompare(s1,s2))
	cout<<"STRINGS are equal ";
	else
	cout<<"STRINGS are not equal ";





getch();

}