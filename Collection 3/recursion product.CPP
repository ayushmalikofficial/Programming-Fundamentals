#include<iostream.h>
#include<conio.h>

int product(int a,int b)
{
 if(b==1)
 return a;

 return a+product(a,b-1);
}

void main()
{
clrscr();
	int n,m ;
	cout<<"Enter 2 no: ";
	cin>>n>>m;
	cout<<endl<<m<<"*"<<n<<" : "<<product(n,m);
getch();
}