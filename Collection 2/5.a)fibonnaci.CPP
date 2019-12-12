#include<iostream.h>
#include<conio.h>

void main()

{
clrscr();
  int a=0,b=1,c=1,n,i;
	cout<<"Enter the no. of terms of the fibonnaci series : ";
	cin>>n;
  cout<<a<<","<<b;
  for(i=2;i<n;i++)
  {
   c=a+b;
   cout<<","<<c;
   a=b;
   b=c;

  }

getch();
}