#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int x,y,z,a,m;
  x=3;y=3;
  cout<<"fisrt case x=2 y=3";
  cout<<"\n\n\n\n\n\nResult"<<(x+y - --x + x++ - --y);
  cout<<"\nx="<<x<<" y="<<y;
  x=3;
  y=3;
  z=x+y - --x + x++ - --y;
  cout<<"\nz="<<z;
  cout<<"\nx="<<x<<" y="<<y;
  cout<<endl<<(2+4*6/2+6*3);
  a=(2+4*6/2+6*3);
  cout<<"\na= "<<a;
  cout<<"\n Next Case x=1,y=2";
  x=1,y=2;
  cout<<"\n"<<x + ++x*y;
  cout<<"\nx="<<x<<" y="<<y;
   x=1;y=2;
  z=x + x++*y;
  cout<<"\nz="<<z;
  cout<<"\nx="<<x<<" y="<<y;
  a=6;
  cout<<"\na=6";
  cout<<endl<<a+++a;
  m=a+++a;
  cout<<"\nm="<<m;
  a=3;
  cout<<"\na=3";
  cout<<endl<<--a*++a;
  m=--a*++a;
  cout<<"\nm="<<m;
  a=5;
  cout<<"\na=5";
  cout<<endl<<--a*++a/a++;
  cout<<"\na="<<a;
  a=5;
  m=--a*++a/a++;
  cout<<"\nm="<<m;
  cout<<"\na="<<a;
  x=4;
  cout<<endl<<x-- + x++ - x - --x + --x;
  x=5;
  getch();
 }
