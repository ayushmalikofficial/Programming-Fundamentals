#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,r1,r2,d;
cout<<"\n\n\nEnter the coefficient of x^2 for equation  : ";
cin>>a;
cout<<"\nEnter the coefficient of x for equation  : ";
cin>>b;
cout<<"\nEnter the constant for equation : ";
cin>>c;
cout<<"\nEmtered Equation :"<<a<<"x^2+"<<b<<"x+"<<c<<"=0";
d=sqrt((b*b)-(4*a*c));
r1=(-b-d)/(2*a);
r2=(-b+d)/(2*a);
cout<<"\nRoot 1 : "<<r1;
cout<<"\nRoot 2 : "<<r2;
getch();
}