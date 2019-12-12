#include<iostream.h>
#include<conio.h>

class tri
{

 float l,b,h;

 public:

 void area();
 void display();
 tri operator + (tri&);
 void operator =(tri& );
 tri(float,float,float);
 friend int operator==(tri&,tri&);


};



int operator==(tri&b1,tri&b2)
{
  if(b1.l==b2.l && b1.h==b2.h && b1.b==b2.b)
  return 1;
  return 0;

}


tri::tri(float x,float y,float z)
{
   l=x;
   b=y;
   h=z;

}

void tri::display()
{
 clrscr();
 cout<<"\nDimensions of the Triangle  \n";
 cout<<"Perpendicular : "<<l<<"cm\n";
 cout<<"Base : "<<b<<"cm\n";
 cout<<"Hypotenuse : "<<h<<"cm\n";

  getch();
}



void tri::operator =(tri&b1)
{

l=b1.l;
h=b1.h;
b=b1.b;

 }



tri tri:: operator+(tri &b2)
{

tri b1(0,0,0);

b1.l=b2.l+l;
b1.h=b2.h+h;
b1.b=b2.b+b;

return b1;

 }



void tri:: area()
 {
 clrscr();

 cout<<"Area of the triangle: "<<0.5*b*h;

 getch();
 }

void main()
{

clrscr();
	 tri t1(5,4,3);
	 tri t2(6,8,9);
	 t1.display();
	 t1.area();
	 t2.display();
	 t2.area();

	 t2=(t1+t1);
	 t2.display();

	if(t2==t1)
	{
	clrscr();
	cout<<"yes";
	}
	else
	{
	clrscr();
	cout<<"no";
	}
getch();

}