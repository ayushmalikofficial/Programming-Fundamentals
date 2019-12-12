#include<iostream.h>
#include<conio.h>

void accept();
float calculate(int,float );
void display(int,float,float,float,float);

void main()
{
clrscr();
accept();
getch();
}

void accept()
{
	int empno;
	float basic;
	cout<<"\nEnter the Employ No. :";
	cin>>empno;
	cout<<"\nEnter Basic Salary :";
	cin>>basic;
	calculate(empno,basic);
}
float calculate(int a,float n)
{
	int hra,da,tax;
	hra=((40*n)/100);
	da=((60*n)/100);
	tax=(((n+hra+da)*40)/100);
	display(a,n,hra,da,tax);
}

void display(int a,float basic,float hra,float da,float tax)
{
	cout<<"\nEmploy no    : "<<a;
	cout<<"\nBasic Salary :Rs"<<basic;
	cout<<"\nH.R.A.       :Rs"<<hra;
	cout<<"\nD.A.         :Rs"<<da;
	cout<<"\nTax          :Rs"<<tax;
	cout<<"\nGross Salary :Rs"<<basic+hra+da;
	cout<<"\nNet Salary   :Rs "<<(basic+hra+da)-tax;

}
