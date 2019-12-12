
void accept();
void display(float,float,float,float,float,float,float,float,float);
void calculate(float,float,float,float);


#include<conio.h>
#include<iostream.h>
#include<iomanip.h>

#define lbr 10
#define tax 8.5


void main()
{
	cout<<setprecision(2);
	clrscr();
	accept();
	getch();
}

void accept()
{
	float l,b,p,d;
	cout<<"\nEnter Length (in feet) : ";
	cin>>l;
	cout<<"\nEnter Breadth (in feet) : ";
	cin>>b;
	cout<<"\nEnter Price per Sq.Foot : ";
	cin>>p;
	cout<<"\nEnter Discount Percentage : ";
	cin>>d;
	calculate(l,b,p,d);
}

void calculate(float l,float b,float p,float d)
{
	float a,bill,sbill,tbill,ttax;
	a=b*l;
	bill=a*p;
	sbill=bill-((bill*d)/100);
	ttax=((sbill*tax)/100);
	tbill=sbill+ttax;
	display(l,b,p,d,a,bill,sbill,tbill,ttax);

}


void display(float l,float b,float p,float d,float a,float bill,float sbill,float tbill,float ttax)
{
clrscr();
cout<<"MEASUREMENT";
cout<<"\n-----------";
cout<<"\nLenght   : "<<l<<" feet";
cout<<"\nBreadth  : "<<b<<" feet";
cout<<"\nArea     : "<<a<<" sq.feet";
cout<<"\n\nCHARGES  ";
cout<<"\n-----------";
cout<<"\nDescription                      Cost/Sq.ft             Charges";
cout<<"\n-----------------               ------------           ------------";
cout<<"\n\nCarpet                           Rs "<<p<<"                   Rs "<<bill;
cout<<"\nLabour                           Rs "<<lbr<<"                   Rs "<<lbr*a;
cout<<"\nInstalled Price                                          Rs "<<bill+lbr*a;
cout<<"\nDiscount                                                 "<<d <<"%";
cout<<"\n\nSubtotal                                                 Rs "<<sbill;
cout<<"\nTax                                                      Rs "<<ttax;
cout<<"\nTotal                                                    Rs "<<tbill;


}