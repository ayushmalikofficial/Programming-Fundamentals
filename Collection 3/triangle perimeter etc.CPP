#include<iostream.h>
#include<conio.h>
#include<math.h>

void accept();
float area(float,float);
float perimeter(float,float,float);
void display(float,float,float,float,float);
void main()
{
clrscr();
accept();
getch();
}

void accept()
{
float p,h,b;
cout<<"Enter Base of The Triangle in cm :";
cin>>b;
cout<<"Enter Perpendicular of The Triangle in cm:";
cin>>p;
h=sqrt(p*p+b*b);
display(p,h,b,area(b,p),perimeter(p,h,b));
}
float area(float a,float b)
{
int x;
x=0.5*(a*b);
return x;
}

float perimeter(float a,float b,float c)
{
int x;
x=a+b+c;
return x;
}

void display(float a,float b,float c,float d,float e)
{
cout<<"\n\n\n\nBase of triangle :"<<c;
cout<<"\nHypotenuse of triangle :"<<b;
cout<<"\nPerpendiculer of triangle :"<<a;
cout<<"\nArea :"<<d;
cout<<"\nPerimeter : "<<e;

}