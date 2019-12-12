#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int p1,q1,p2,q2,p3,q3;
  cout<<"\n\nEnter numerater of first rartional no. :";
  cin>>p1;
  cout<<"\nEnter denominator of first rartional no. :";
  cin>>q1;
  cout<<"\nFirst rational no. is : "<<p1<<"\\"<<q1;
  cout<<"\n\nEnter numerater of second rartional no. :";
  cin>>p2;
  cout<<"\nEnter denominator of second rartional no. :";
  cin>>q2;
  cout<<"\nSecond rational no. is : "<<p2<<"\\"<<q2;
  p3=p1*p2;
  q3=q1*q2;
  cout<<"\n\n1.Product of the 2 rational no's : "<<p3<<"\\"<<q3;
  p3= (p1*q2)+(p2*q1);
  q3=q1*q2;
  cout<<"\n\n2.Sum of the 2 rational no's : "<<p3<<"\\"<<q3;
  p3= (p1*q2)-(p2*q1);
  q3=q1*q2;
  cout<<"\n\n3.Difference of the 2 rational no's : "<<p3<<"\\"<<q3;
  p3=p1*q2;
  q3=q1*p2;
  cout<<"\n\n4.Quotient of the 2 rational no's : "<<p3<<"\\"<<q3;
  getch();
 }
