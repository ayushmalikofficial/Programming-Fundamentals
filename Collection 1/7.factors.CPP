#include<iostream.h>
#include<conio.h>
#include<math.h>

void factors(int n)
{
	clrscr();
	cout<<"FACTORS OF "<<n<<" : \n\n";
	for(int i=1;i<n/2;i++)
	if(n%i==0)
	cout<<i<<"  ";
	cout<<n;

}


void main()
{
    clrscr();
    int n;
    cout<<"Enter A No. ";
    cin>>n;
    factors(n);
    getch();



}