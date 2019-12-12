#include<iostream.h>
#include<conio.h>
#include<stdio.h>


int strcompare(char s1[20],char s2[20])
{
	int i,j;

	for(i=0,j=0;((s1[i]!='\0')&&(s2[j]!='\0'));i++,j++)
	 if(s1[i]!=s2[j])
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