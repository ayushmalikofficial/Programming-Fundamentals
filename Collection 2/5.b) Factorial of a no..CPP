#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int x,f=1;
cout<<"\nFind Factorial ";
cout<<"\nEnter A positive No. : ";
cin>>x;
if(x!=0)
{
for(int i=1;i<=x;i++)
f=f*i;
cout<<"\n"<<x<<" Factorial : "<<f;
}

else if(x==0)
cout<<"\n0 Factorial : 1";

else
cout<<"\nEnter A positive no. only ";

getch();

}
