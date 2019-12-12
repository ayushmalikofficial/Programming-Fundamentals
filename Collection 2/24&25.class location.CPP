#include<iostream.h>
#include<conio.h>

class loc
{
 int lat,lon;

 public:
 loc operator ++();
 loc operator ++(int);
 loc operator --();
 loc operator --(int);
 loc(int,int);
 friend loc operator +(int&,loc&);
 friend loc operator +(loc&,int&);

 void display();
} ;

  loc operator+(loc&b,int&x)
  {
   b.lat+=x;
   b.lon+=x;
   return b;
  }
  loc operator+(int&x,loc&b)
  {
   b.lat+=x;
   b.lon+=x;
   return b;
  }
 void loc::display()
 {
   clrscr();
   cout<<"Location of the Place ";
   cout<<"\nLatitude : "<<lat ;
   cout<<"\nLongitude : "<<lon;
   getch();
 }

 loc loc :: operator ++()
 {
  lat++;
  lon++;
  return(*this);

 }

 loc loc :: operator --()
 {
  lat--;
  lon--;
  return(*this);

 }
 loc loc :: operator --(int)
 {
  loc obj=(*this);
  lat--;
  lon--;
  return(obj);

 }
 loc loc :: operator ++(int)
 {
  loc obj=(*this);
  lat++;
  lon++;
  return(obj);

 }
 loc::loc(int x,int y )
 {
  lon=y;
  lat=x;



 }

void main()
{

clrscr();


   loc l(45,60);

   (10+l).display();
   (l+10).display();

   l.display();
   (l++).display();
   l.display();
   (l--).display();
   l.display();
   (--l).display();
   (++l).display();



getch();

}