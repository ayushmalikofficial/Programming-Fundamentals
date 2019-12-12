#include<iostream.h>
#include<conio.h>


class length
{

  float feet,inch;

  public:
   length(float,float);
  void display();
  void accept();
  length operator +(length&x);
  length operator -(length&x);

};

length::length(float x =0,float y=0)
{
     feet=x;
     inch=y;

}

length length::operator +(length&x)
{
   length c;
    c.feet = feet + x.feet;
    c.inch = inch + x.inch;

    return c;
}

length length::operator -(length&x)
{
    length  c;
    c.feet = feet - x.feet;
    c.inch = inch - x.inch;

    return c;


}
void length::display()
{

	clrscr();
	cout<<"Length :"<<feet<<" feet "<<inch<<" inch ";
	getch();

}

void length::accept()
{
      clrscr();
      cout<<"Enter the length of the object :     feet      inches ";
      cin>>feet>>inch;

}

void main()
{

clrscr();

   length obj1(4,5),obj2(6,8);
   obj1.display();
   obj2.display();
   (obj1+obj2).display();
   (obj2-obj1).display();



getch();

}