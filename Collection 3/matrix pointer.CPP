#include<iostream.h>
#include<conio.h>
#include<process.h>

class matrix
{

int i,j,n,m,**p;

public:
matrix(int n,int m)
{
     n=n;
     m=n;

	p=new int*[n];

	for(i=0;i<n;i++)
	   *(p+i)=new int[m];

}
void accept()
{


cout<<"\nEnter the elements of the matrix :\n ";

	for(i=0;i<n;i++)
	  for(j=0;j<m;j++)
	    cin>>p[i][j];

}

void display()
{
	clrscr();

	for(i=0;i<n;i++)
	{
	 for(j=0;j<m;j++)
	 cout<<p[i][j]<<" ";

	 cout<<endl;
	}
}

matrix add( matrix m1 )
{


     if(n!=m1.n||m!=m1.m)
     {
     cout<<"Addition not possible ";
     getch();
     exit(0);
     }
       matrix m3(n,m);

		for(i=0;i<n;i++)
		  for(j=0;j<m;j++)
		   m3.p[i][j]=p[i][j]+m1.p[i][j];




    return m3;
}

};

void main()
{

clrscr();

	matrix m1,m2;
	m1.accept();
	m1.display();
	m2.accept();
	m2.display();
	m3=m1.add(m2);
	m3.display();
getch();

}

