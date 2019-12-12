 #include<iostream.h>
 #include<conio.h>

 void sumpro(long n)
 {
	int  r;
	 long s=0,p=1;
	while(n>0)
	{
		r=n%10;
		s=s+r;
		p=p*r;
		n=n/10;
	}
	cout<<"\nSum of Digits : "<<s;
	cout<<"\nProduct of Digits : "<<p;


 }


 void main()
 {
  long n;
	  clrscr();
	  cout<<"\nEnter a no. : ";
	  cin>>n;
	  sumpro(n);

  getch();

 }