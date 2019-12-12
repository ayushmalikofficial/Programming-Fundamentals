#include<iostream.h>
#include<conio.h>

int gcd(int a,int b)
{
  if(b%a==0)
  return a;

  return gcd((b/a),a);

}
void main()
{
clrscr();
	int a,b;
	cout<<"Enter 2 no's : ";
	cin>>a>>b;
	if(a<b)
	cout<<"G.C.D. of "<<a<<","<<b<<" : "<<gcd(a,b);
	else if(a>b)
	cout<<"G.C.D. of "<<a<<","<<b<<": "<<gcd(b,a);
	else
	cout<<"G.C.D. of "<<a<<","<<b<<": "<<a;


getch();
}

