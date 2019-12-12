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
    if(islower(str[i]))
      str[i]=toupper(str[i]);


    cout<<"String : "<<str;


getch();

}