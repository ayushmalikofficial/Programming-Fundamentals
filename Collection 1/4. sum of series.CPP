#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();

int n,i,s=0;

cout<<"Enter the Nth term of the series : ";
cin>>n;
for(i=1;i<=n;i++)
s=s-(i*pow(-1,i));
cout<<"\n\nSum is : "<<s;

getch();

}