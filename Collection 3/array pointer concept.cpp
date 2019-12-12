 #include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int a[5];

for(int i=0;i<5;i++)
cin>>a[i];

cout<<a<<endl;
cout<<&a<<endl;
cout<<a[0]<<endl;
cout<<&a[0]<<endl;

getch();
}