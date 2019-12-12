#include<iostream.h>
#include<conio.h>

int factorial(int n)
{

if(n==1)
return 1;

return n*factorial(n-1);


}



void main()
{

clrscr();
int n ;
	cout<<"Enter a no: ";
	cin>>n;
	cout<<"FACTORIAL "<<n<<" : "<<factorial(n);

getch();

}