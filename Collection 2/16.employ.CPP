#include<fstream.h>
#include<conio.h>
#include<stdio.h>

struct employ
{
char empno[10],empname[20],ch[100];
double  hra,da,basic,eall;


void accept()
{
clrscr();
	cout<<"Enter the details of the Employ :\n";
	cout<<"\nEmploy ID : ";    gets(empno);
	cout<<"\nName : ";        gets(empname);
	cout<<"\nH.R.A : Rs ";    cin>>hra;
	cout<<"\nD.A. : Rs ";    cin>>da;
	cout<<"\nBasic Salary : Rs ";     cin>>basic;
	cout<<"\nExtra Allowances : Rs ";   cin>>eall;
 getch();

}

void display()
{

cout<<empno<<"       "<<empname<<"        "<<hra<<"        "<<da<<"        "<<basic<<"        "<<eall;
}


};


void main()
{
	int i;
	employ e[5];
	fstream f1;

	f1.open("emp.dat",ios::out|ios::binary);

	   for(i=0;i<5;i++)
	   {

		e[i].accept();
		f1.write((char*)&e[i],sizeof(e[i]));
	    }


	f1.close();


	f1.open("emp.dat",ios::in|ios::binary);

	clrscr();

	cout<<"Details of the employees : \n\n\n";
	cout<<"EId       Name        H.R.A        D.A.         Basic         Extra-allowances\n";

	for(i=0;i<n;i++)
	{
	f1.read((char*)&e[i],sizeof(e[i]));
	e[i].display();
	}

	f1.close();
	getch();
}