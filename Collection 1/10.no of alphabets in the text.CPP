#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<ctype.h>

void main()
{

clrscr();

char str[200];
int a[26]={0},b;
	cout<<"Enter the Text : \n";
	gets(str);

for(int i=0;str[i]!='\0';i++)
{

	b=str[i];

 if(isalpha(str[i]))
   {
     if(islower(str[i]))
      a[b-97]++;

     else if(isupper(str[i]))
       a[b-65]++;

   }
}


for(i=0;i<26;i++)
{

if(i%10==0)
{
getch();
clrscr();
cout<<"TEXT : "<<str;
cout<<"\n\n\n\n\n\n";
cout<<"  \257   Alphabet  ||      No. \256\n";
}
cout<<endl<<"  \257   "<<char(i+65)<<"/"<<char(i+97)<<"       ||       "<<a[i]<<"  \256   ";

}

getch();

}