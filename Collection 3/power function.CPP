#include<iostream.h>
#include<conio.h>

 long power(int n,int x)
 {
  long result=1;
  for (int i=0;i<x;i++)
  result=result*n;

  return result;
 }

void main()
{
clrscr();
int a,b;
cout<<"\nEnter the No. whose power is to be calculated : ";

cin>>a ;
cout<<"\nEnter the Exponent : ";
cin>>b;
cout<<"\n\n\nResult : "<<power(a,b);

getch();
}