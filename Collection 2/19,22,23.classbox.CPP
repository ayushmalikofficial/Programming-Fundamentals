#include<iostream.h>
#include<conio.h>

class box
{
 float l,b,h;
 public:
 box(box&);
 void volume();
 void display();
 box operator +(box&);
 void operator =(box& );
 void cc();
 box(float,float,float);
 friend int operator==(box&,box&);
}
box::box(box&b1)
{
 l=b1.l;
 b=b1.b;
 h=b1.h;

}
int operator==(box&b1,box&b2)
{
  if(b1.l==b2.l&&b1.h==b2.h&&b1.b==b2.b)
  return 1;
  return 0;

}
box::box(float x,float y,float z)
{
   l=x;b=y;h=z;

}
void box::cc()
{
 clrscr();
 if(l==b&&l==h)
 cout<<"Box is a cube";
 else
 cout<<"Box is a cuboid";


 getch();
}

void box::display()
{
 clrscr();
 cout<<"\nDimensions of the Box \n";
 cout<<"Length : "<<l<<"cm\n";
 cout<<"Breadth : "<<b<<"cm\n";
 cout<<"Height : "<<h<<"cm\n";

  getch();
}
void box::operator=(box&b1)
{

b1.l=l;
b1.h=h;
b1.b=b;
}


box box:: operator+(box &b2)
{
box b1(0,0,0);

b1.l=b2.l+l;
b1.h=b2.h+h;
b1.b=b2.b+b;

return b1;

 }

void box::volume()
 {
 clrscr();
 cout<<"VOLUME OF THE BOX : "<<l*b*h;
 getch();
 }

void main()
{

clrscr();


	box b(4,5,6);
	box b2(4,4,4);
	box b1=b2;
	b.display();
	b2.display();
	b.volume();
	(b+b2).display();
	b.cc();
	b2.cc();
	if(b1==b2)
	{clrscr();
	cout<<"yes";
	}
getch();

}