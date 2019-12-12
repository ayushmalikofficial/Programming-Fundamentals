 #include<iostream.h>
 #include<conio.h>
 #include<process.h>

 class complex
{

 int real,img;

 public:

	 complex();
	 complex(int );
	 complex(int,int);
	 complex(complex &);
	 ~complex();
	 complex operator+(complex&c);
	 complex operator-(complex&c);
	 complex operator/(complex&c);
	 complex operator*(complex&c);
	 complex operator+=(complex&c);
	 complex operator++();
	 complex operator++(int);
	 complex operator--();
	 complex operator--(int);
	 complex operator-();
	 void accept();
	 void display();

};


void complex::accept()
{
  clrscr();
	 cout<<"\nEnter the real part of the complex no :\n";
	 cin>>real;
	 cout<<"\nEnter the imaginary part of the complex no :\n";
	 cin>>img;
  clrscr();
}
complex complex:: operator*(complex&c)
{

    complex c3;

    c3.real=(real*c.real) - (img*c.img);
    c3.img=(real*c.img)+(img*c.real);


    return c3;
}

complex complex::operator/(complex&c)
{
     complex c3;

	 c3.real=((real*c.real)-(img*c.img)) /(c.real*c.real +c.img*c.img);
	 c3.img=((real*c.img)+(img*c.real)) /(c.real*c.real +c.img*c.img);

     return c3;


}

void complex:: display()
{
	 clrscr();
	 if(img>=0)
	 cout<<"\n\nComplex No : "<<real<<"+"<<img<<"i";
	 else
	 cout<<"\n\nComplex No : "<<real<<img<<"i";

	 getch();
}


complex complex::operator-()
{
  real=-real;
  img=-img;

  return(*this);

}


complex complex::operator-(complex &c)
{

   complex c3;
   c3.real=real-c.real;
   c3.img=img-c.img;

   return c3;
}


complex complex::operator+(complex &c)
{

   complex c3;
   c3.real=c.real+real;
   c3.img=c.img+img;

   return c3;
}


complex complex::operator+=(complex &c)
{
	real=real+c.real;
	img=img+c.real;

   return (*this);
}


complex complex::operator++()
{
	 real++;
	 img++;

	return (*this);
}


complex complex::operator++(int)
{
	complex save((*this));

	 real++;
	 img++;

	return save;
}


complex complex::operator--()
{
	 real--;
	 img--;

	return (*this);
}

complex complex::operator--(int)
{
	complex save((*this));

	 real--;
	 img--;

	return save;
}


complex::complex()
{
      //	cout<<"Default constructor is called\n\n";
	real=0;
	img=0;

}


complex::complex(int a)
{

      //	cout<<"1 Parameter constructor is called\n\n";
	real=a;
	img=0;

}


complex::complex(int a,int b)
{
      // cout<<"2 Parameter constructor is called\n\n";
	real=a;
	img=b;

}


 complex::complex(complex&c)
{
      //	cout<<"Copy constructor is called\n\n";
	real=c.real;
	img=c.img;
}

complex::~complex()
{
       //	cout<<"Destructor of "<<"is called\n\n" ;
}


void mainmenu(complex &c1,complex&c2)
{

  clrscr();
  char ch;


	clrscr();
	cout<<"\n\n\n\n         \t\t\t-\4\4COMPLEX NO.MAIN MENU\4\4-";
	cout<<"\n\n\n\t\t\t\t1.Enter 2 New No.'s";
	cout<<"\n\n\t\t\t\t2.Add ";
	cout<<"\n\n\t\t\t\t3.Subtract ";
	cout<<"\n\n\t\t\t\t4.Multiply ";
	cout<<"\n\n\t\t\t\t5.Divide ";
	cout<<"\n\n\t\t\t\t6.Post Increment";
	cout<<"\n\n\t\t\t\t7.Pre Increment";
	cout<<"\n\n\t\t\t\t8.Post Decrement";
	cout<<"\n\n\t\t\t\t9.Pre Decrement";
	cout<<"\n\n\t\t\t\t*.Unary Decrement";
	cout<<"\n\n\t\t\t\t#.Display the 2 No.s";
	cout<<"\n\n\t\t\t\t0.Exit         ";
	cout<<"\n\n\t\t\t\tEnter Your Choice : ";
	cin>>ch;
	switch(ch)

	{
		case '1':
			 c1.accept();
			 c1.display();
			 c2.accept();
			 c2.display();
			 break;
		case '2':
			 (c1+c2).display();
			 break;

		case '3':
			 (c1-c2).display();

			 break;
		case '4':

			 (c1*c2).display();

			 break;
		case '5':

			 (c1/c2).display();

			 break;
		case '6':
			 (c1++).display();
			 (c2++).display();

			 break;

		case '7':
			 (++c1).display();
			 (++c2).display();

			 break;
		case '8':
			 (c1--).display();
			 (c2--).display();

			 break;
		case '9':
			 (--c1).display();
			 (--c2).display();

			 break;

		case '*':
			 (-c1).display();
			 (-c2).display();

			 break;
		case '#':
			 c1.display();
			 c2.display();
			 break;


		case '0':
			exit(0);
			break;
		default:
		cout<<"\n\n\t\t\t\tINVALID CHOICE KINDLY RE-ENTER";
		getch();
		mainmenu(c1,c2);


	}





  mainmenu(c1,c2);

}
void main()
{

  complex c1,c2;
  c1.accept();
  c1.display();
  c2.accept();
  c2.display();
  mainmenu(c1,c2);


}