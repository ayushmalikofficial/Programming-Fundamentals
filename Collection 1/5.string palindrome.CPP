#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int palindrome( char a[])
{
int i,j;

for(i=0;a[i]!='\0';i++);

for(j=i-1,i=0;i<=j;i++,j--)
	if(a[i]!=a[j])
	return 0;

return 1;

}





void main()
{

clrscr();


char str[50];

	cout<<"Enter a string : ";
	gets(str);
	cout<<endl;

if(palindrome(str))
cout<<"String is a palindrome ";

else
cout<<"String is not a palindrome ";

getch();

}