#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void series(int n)
{
	double s=0;
	cout<<setprecision(2);

	for(float i=1;i<=n;i++)
	{
	s=s+(1/i);
	}
	cout<<"\nSum of series : "<<s;

}

void main()
{
	clrscr();
	int n;
	cout<<"\nEnter the No of Terms : ";
	cin>>n;
	series(n);
	getch();
}