#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>

void main()
{

clrscr();

char str[20];
int i;
   cout<<"Enter the string : ";
     gets(str);

 for(i=0;str[i]!='\0';i++)
    if(isupper(str[i]))
      str[i]=tolower(str[i]);


    cout<<"String : "<<str;


getch();

}