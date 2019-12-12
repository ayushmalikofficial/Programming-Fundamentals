#include<iostream.h>
#include<conio.h>
#include<stdio.h>

//Concatenation

char *concat(char *s1,char *s2)
{

 char *s3;
 char *p=s3;
 while(*s1)
 {
 *s3=*s1;
  s3++;
  s1++;
 }

 while(*s2)
 {
 *s3=*s2;
 s3++;
 s2++;
  }

 *s3='\0';

  return p;
}

void main()
{

clrscr();

char s1[20],s2[20],*s3=new char[40];

gets(s1);
gets(s2);
s3=concat(s1,s2);
cout<<s3;
getch();
}
