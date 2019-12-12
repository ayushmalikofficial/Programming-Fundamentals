#include<iostream.h>
#include<conio.h>
#include<process.h>



int fib(int n)
{
 if(n==1)
 return 0;
 if(n==2)
 return 1;

 return (fib(n-1)+fib(n-2));
}

void main()
{

clrscr();

     int n;
     cout<<"Enter N for the fibonnaci series : ";
     cin>>n;
     cout<<"\n"<<n<<" th term : "<<fib(n);

getch();

}