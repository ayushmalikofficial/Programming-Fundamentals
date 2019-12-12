#include<iostream.h>
#include<conio.h>
#include<process.h>

void display(int [][50],int);

void transpose()
{

	clrscr();
	cout<<"\n\nNOTE: A New Matrix will be accepted which is not accessible further";
	getch();

	clrscr();
	int b[50][50],a[50][50],n,j,i;
	cout<<"Enter the no. of rows and columns of the square matrix : ";
	cin>>n;
	cout<<"\n\nEnter the elements of the matrix : \n";


	for( i=0;i<n;i++)
	for( j=0;j<n;j++)
	cin>>a[i][j];

	display(a,n);

	for( i=0;i<n;i++)
	for( j=0;j<n;j++)
	b[j][i]=a[i][j];

	clrscr();
	cout<<"TRANSPOSE ";
	display(b,n);

}


void subtract(int a[][50],int b[][50],int n)
{
    int c[50][50],i,j;
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
	c[i][j]=b[i][j]-a[i][j];

     clrscr();
     cout<<"DIFFERENCE ";
     display(c,n);
}

void add(int a[][50],int b[][50],int n)
{
    int c[50][50],i,j;
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
	c[i][j]=b[i][j]+a[i][j];

     clrscr();
     cout<<"SUM ";
     display(c,n);
}
void display(int a[][50],int n)
{


	int i,j;

	cout<<"MATRIX : \n\n";
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	  cout<<a[i][j]<<"  ";
	cout<<endl;
	}
	cout<<endl;
	getch();
}

void product(int a[][50],int b[][50],int n)
{
     int c[50][50]={ 0 },i=0,j=0,k=0;

     for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		for(k=0;k<n;k++)
		c[i][j]= c[i][j]+(a[i][k]*b[k][j]);

     clrscr();
     cout<<"PRODUCT ";
     display(c,n);

}


void accept(int a[][50],int b[][50],int &n)
{
clrscr();
	int i,j;

	cout<<"\n\n\nEnter the no. of rows and columns of the square matrices : ";
	cin>>n;

	clrscr();
	cout<<"Enter the elements of the first matrix : \n";



	for( i=0;i<n;i++)
	for( j=0;j<n;j++)
	cin>>a[i][j];



	clrscr();
	cout<<"Enter the elements of the second matrix : \n";


	for( i=0;i<n;i++)
	for( j=0;j<n;j++)
	cin>>b[i][j];

	clrscr();
	display(a,n);
	cout<<"\n\n\n\n";
	display(b,n);




}
void mainmenu(int a[][50],int b[][50],int &n)
{

clrscr();

char ch;
	cout<<"\n\n\n\n\t\t\t\t-\4\4MAIN MENU\4\4-";
	cout<<"\n\n\n\t\t\t\t1.Enter 2 New Square Matrices";
	cout<<"\n\n\t\t\t\t2.Add ";
	cout<<"\n\n\t\t\t\t3.Subtract";
	cout<<"\n\n\t\t\t\t4.Mutiply  ";
	cout<<"\n\n\t\t\t\t5.Find Transpose ";
	cout<<"\n\n\t\t\t\t6.Display ";

	cout<<"\n\n\t\t\t\t0.Exit";

	cout<<"\n\n\t\t\t\tEnter Your Choice : ";
	cin>>ch;
	switch(ch)

	{
		case '1':
			accept(a,b,n);
			break;
		case '2':

			add(a,b,n);
			break;

		case '3':
			subtract(a,b,n);
			break;
		case '4':
			product(a,b,n);
			break;
		case '5':
			transpose();
			break;
		case '6':
			clrscr();
			display(a,n);
			display(b,n);
			break;

		case '0':
			exit(0);
			break;
		default:
		cout<<"\n\n\t\t\t\tINVALID CHOICE KINDLY RE-ENTER";
		getch();
		}


mainmenu(a,b,n);
}

void main()
{

clrscr();

	int a[50][50],b[50][50],n;

	accept(a,b,n);
	mainmenu(a,b,n);


}