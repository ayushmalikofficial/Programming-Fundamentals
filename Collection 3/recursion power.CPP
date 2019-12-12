 #include<iostream.h>
 #include<conio.h>

 int power(int a,int b)
 {
  if(b==1)
  return a;

  return a*power(a,b-1);

 }


 void main()
 {

  clrscr();

 int n,m ;
	cout<<"Enter 2 no: ";
	cin>>n>>m;
	cout<<endl<<n<<"^"<<m<<" : "<<power(n,m);

  getch();

 }