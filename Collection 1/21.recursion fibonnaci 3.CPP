#include<iostream.h>
#include<conio.h>
#include<process.h>



void fib(int a,int b,int n)
{

  n--;
 cout<<","<<b;
 if(n==1)
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