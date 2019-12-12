#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int n,x,o=0,o1=0,e=0,e1=0;
cout<<"\nOdd Even No. Program ";
cout<<"\nEnter The total no.'s you want to enter : ";
cin>>n;

for(int i=0;i<n;i++)
{
cout<<"Enter the "<<i+1<<" No.";
cin>>x;
if(x%2!=0)
{
o1++;
o=o+x;
}
else
{
e1++;
e=e+x;
}
}
cout<<"\nTotal No of Odd No.'s : "<<o1;
cout<<"\nSum of all Odd No.'s  : "<<o;

cout<<"\nTotal No of Even No.'s : "<<e1;
cout<<"\nSum of all Even No.'s  : "<<e;
getch();

}
