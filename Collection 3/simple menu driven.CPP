#include<iostream.h>
#include<conio.h>
#include<process.h>

int multiply(int a,int b)
{
return a*b;
}
int subtract(int a,int b)
{
return a-b;
}
int add(int a,int b)
{
return a+b;
}
int divide(int a,int b)
{
return a/b;
}

void main()
{
	clrscr();
	int ch,a,b;
	cout<<"Enter 2 No.'s : \n";
	cin>>a>>b;
	cout<<"\n\n       MAIN MENU ";
	cout<<"\n1.ADD";
	cout<<"\n2.Subtract";
	cout<<"\n3.Multiply";
	cout<<"\n4.Divide";
	cout<<"\n5.Exit";
	cout<<"\n\nEnter Your Choice  : ";
	cin>>ch;
	cout<<"\n\n\n\nResult : ";
	switch(ch)
	{
	case 1:cout<<add(a,b);break;
	case 2:cout<<subtract(a,b);break;
	case 3:cout<<multiply(a,b);break;
	case 4:cout<<divide(a,b);break;
	case 5:exit(0);break;
	default:cout<<"\nWRONG CHOICE ";

}
getch();
}