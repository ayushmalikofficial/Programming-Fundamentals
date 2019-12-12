#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void display(float s )
{
cout<<setprecision(2);
float p;
char g;
p=s/5;
if(p>=95)
g='A';
else if(p>=85)
g='B';
else if(p>=75)
g='C';
else if(p>=65)
g='D';
else if(p>=45)
g='E';
else
g='F';

cout<<"\nGRADE      : "<<g;
cout<<"\nPERCENTAGE : "<<p<<"%";
}

void input()
{
float a,b,c,d,e,s;
cout<<"Enter the marks of 5 subjects :\n";
cin>>a>>b>>c>>d>>e;
s=a+b+c+d+e;
display(s);
}

void main()
{
clrscr();
input();
getch();
}