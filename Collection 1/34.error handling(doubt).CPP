#include<iostream.h>
#include<conio.h>


class error
{

 public:
 virtual void show()
 {
 clrscr();
 cout<<"\nError";

 }


};

class divbyzero :public error
{

 public :
 virtual void show()
 {
 clrscr();
 cout<<"\nDivisor Can't be zero Kindly Re-enter";

 }

};


class divbyneg:public error
{

 public :

 virtual void show()
 {
 clrscr();
 cout<<"\nDivisor Can't be Negative Kindly Re-enter";

 }

};

void main()
{

clrscr();

	int a,b;
	l:
	cout<<"Enter the Divident : ";
	cin>>a;
	cout<<"Enter the Divisor : ";
	cin>>b;

    try
    {

     if(b==0)
     throw divbyzero();

     else if (b<0)
     throw divbynegative();

     cout<<"\nResult : "<<a/b;
    }
    catch(error &obj)
    {
     obj.show();
     goto l ;

    }




getch();

}