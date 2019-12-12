#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();
int a[]={1,2,3,4,5},i,n=5;

cout<<"Enter the Array a \n";

for(i=0;i<n;i++)
cin>>a[i];

char c[20];
char *p;

cout<<"\nEnter the string c ";
gets(c);


cout<<endl<<"c = "<<c;
cout<<endl<<"&c = "<<&c;
cout<<endl<<"&c[0] = "<<&c[0];
cout<<endl<<"*c = "<<*c;
cout<<endl<<"c[0] = "<<c[0];
cout<<endl<<"*(c+2) = "<<*(c+2);
cout<<endl<<"(c+2) = "<<c+2;
cout<<endl<<"*(c+1) = "<<*(c+1);
cout<<endl<<"&(c+1) = Error address";

cout<<endl;

cout<<endl<<"a = "<<a;
cout<<endl<<"&a = "<<&a;
cout<<endl<<"&a[0] = "<<&a[0];
cout<<endl<<"*a = "<<*a;
cout<<endl<<"a[0] = "<<a[0];
cout<<endl<<"*(a+2) = "<<*(a+2);
cout<<endl<<"(a+2) = "<<a+2;

cout<<endl<<"*(a+1) = "<<*(a+1);
cout<<endl<<"&(a+1) = error address";

getch();
}