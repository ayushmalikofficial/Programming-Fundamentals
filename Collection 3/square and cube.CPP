#include<iostream.h>
#include<conio.h>

//program for calculating square and cube

//functions
void accept(int);
void display(int,int);
int cube(int);
int square(int);

void main( )
{
	clrscr();
	int n;
	cout<<"\nEnter the no.:";
	cin>>n;
	accept(n);
	getch();
}


void accept(int x)
{
	display(square(x),cube(x));
}
int square(int x)
{
	int n;
	n=x*x;
	return n;
}

int cube(int x)
{
	int n;
	n=x*x*x;
	return n;
}

void display(int x,int y)
{
	cout<<"\nSquare : "<<x;
	cout<<"\nCube : "<<y;
}