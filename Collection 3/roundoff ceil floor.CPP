#include<iostream.h>
#include<conio.h>
#include<math.h>

int roundoff(int n)
{
       int x;
       x=ceil((n+0.5));
	return x;

}

void main()
{
	clrscr();
	float n;
	cout<<"\nEnter a Floating No. ";
	cin>>n;
	cout<<"Estimated No. "<<roundoff(n);
	getch();
}