#include<iostream.h>
#include<conio.h>
#include<math.h>

int prime(int n)
{
	if(n==1)
	return 0;

	for(int i=2;i<=sqrt(n);i++)
	{

	if(n%i==0)
	return 0;

	}
	return 1;


}
void main()
{
	clrscr();
	int n;

	cout<<"Enter a no. to be checked if it is prime or not : ";
	cin>>n;

	if(prime(n)==1)
	cout<<"\n\n"<<n<<" is a prime no. ";
	else
	cout<<"\n\n"<<n<<" is not a prime no. ";

	getch();
	clrscr();

	cout<<"\n\nThe list of prime no.'s from 1- 100 will be displayed ";

	getch();
	clrscr();
	cout<<"LIST OF PRIME NO.'S 1-100 :-\n\n";

	for(int i=1;i<100;i++)
	  if(prime(i))
	     cout<<i<<"  ";

	getch();

}