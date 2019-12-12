#include<iostream.h>
#include<conio.h>
#include<process.h>

int c=1;

void fib(int a,int b /*,int&c*/,int n)
{
 c++;

 cout<<","<<b;
 if(c==n)
 {
 getch();
 exit(0);
 }
 fib(b,b+a,n);
}

void main()
{
clrscr();
     int n;
     cout<<"Enter the no of terms of the fibonnaci series : ";
     cin>>n;
     clrscr();
     cout<<n<<"Terms of Fibonnaci Series : \n";
     cout<<"0";
     fib(0,1,n);

getch();



}