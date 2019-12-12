#include<iostream.h>
#include<conio.h>

long reverse(long n)
{
	long r,rev=0;
	while(n>0)
	{
	r=n%10;
	rev=rev*10+r;
	n=n/10;
	}
	return rev;
}


void main()
{
	clrscr();
	long n;
	cout<<"\nEnter the No. : ";
	cin>>n;
	cout<<"\nReverse of the No : "<<reverse(n);
	getch();
}