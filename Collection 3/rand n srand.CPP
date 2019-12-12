#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
clrscr();
int n;
for(int i=0;i<7;i++)
{
n=rand();
cout<<"\nThe No. :"<<n;
}
cout<<endl<<endl;

for( i=0;i<7;i++)
{
n=rand();
cout<<"\nThe No. :"<<n;
}
cout<<endl<<endl;

srand(100);
for( i=0;i<7;i++)
{
n=rand();
cout<<"\nThe No. :"<<n;
}
cout<<endl<<endl;
srand(100);
for( i=0;i<7;i++)
{
n=rand();
cout<<"\nThe No. :"<<n;
}

cout<<"\n\nRandom No.'s 1-5";
for(i=0;i<=10;i++)
{
n=rand()%5+1;
cout<<"\n"<<n;
}
getch();
}