#include<iostream.h>
#include<conio.h>

void swap(int &a ,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}

void main()
{
clrscr();
	int a,b;
	cout<<"Enter 2 No.'s :";
	cout<<"\nA : ";
	cin>>a;
	cout<<"B : ";
	cin>>b;
	swap(a,b);
	cout<<"\nNo.s After Swapping : \nA : "<<a<<"\nB : "<<b;
getch();
}