#include<iostream.h>
#include<conio.h>


void main()
{
clrscr();
int a1,b1,a2,b2,a3,b3;
cout<<"\nEnter real part of the 1st complex no. : ";
cin>>a1;
cout<<"\nEnter imagenary part of the 1st complex no. : ";
cin>>b1;
cout<<"\n\n1st complex no is : "<<a1<<"+"<<b1<<"i";
cout<<"\n\nEnter real part of the 2nd complex no. : ";
cin>>a2;
cout<<"\nEnter imagenary part of the 2nd complex no. : ";
cin>>b2;
cout<<"\n\n2nd complex no is : "<<a2<<"+"<<b2<<"i";
  a3=(a1*a2)-(b1*b2);
  b3=(a1*b2+b1*a2);
  cout<<"\n\n1.Product of the 2 complex no's : "<<a3<<"+"<<b3<<"i";

  a3=a1+a2 ;
  b3=b1+b2;
  cout<<"\n\n2.Sum of the 2 complex no's : "<<a3<<"+"<<b3<<"i";

  a3=a1-a2;
  b3=b1-b2;
  cout<<"\n\n3.Difference of the 2 complex no's : "<<a3<<"+"<<b3<<"i";

  a3=a1*a2+b1*b2;
  b3=b1*a2-a2*b2;
  cout<<"\n\n4.Quotient of the 2 complex no's : "<<a3<<"+"<<b3<<"i"<<"/"<<a2*a2+b2*b2;;

  getch();
}