#include<iostream.h>
#include<conio.h>

void swap(int *p,int *q)
{
   int  temp;
   temp=*p;
   *p=*q;
   *q=temp;

}


void main()
{

clrscr();
    int a,b;
    cout<<"Enter No. A : ";
    cin>>a;

    cout<<"Enter No. B : ";
    cin>>b;

    swap(&a,&b);
    cout<<"After Swapping \nA : "<<a<<" B : "<<b;





getch();

}