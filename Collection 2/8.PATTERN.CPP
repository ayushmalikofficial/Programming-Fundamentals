#include<iostream.h>
#include<conio.h>

// PATTERNS



void pattern(int n,char ch ,int x)
{
    clrscr();
    int i,j,k,s,l;
    s=n-1;

    if(x==1||x==3)
    l=1;
    else if(x==2||x==4)
    l=0;
    for(i=0;i<n;i++)
	 {
		for(j=0;j<s;j++)
		cout<<" ";
		for(k=0;k<l;k++)
		cout<<ch;
		l+=2;
		s--;
		cout<<endl;
	 }
	 if(x==3||x==4)
	 {
	 s=1;
	 l=l-4;
	 for(i=n-1;i>0;i--)
	 {
		for(j=0;j<s;j++)
		cout<<" ";
		for(k=0;k<l;k++)
		cout<<ch;
		l-=2;
		s++;
		cout<<endl;


	 }
	 }

}

void main()
{


  int n,x;
  char ch,ch1;
  do
  {
  clrscr();
  cout<<"\nEnter the No of Lines: ";
  cin>>n;
  cout<<"Enter the Character : ";
  cin>>ch;
  cout<<"Enter Pattern no (1/2/3/4) : ";
  cin>>x;
  if(x==2||x==1||x==3||x==4)
  pattern(n,ch,x);
  else
  cout<<"\n\nWRONG INPUT ";
  getch();
  clrscr();
  cout<<"\n\n\n\tDo you wish to continue (Y/N) ? :";
  cin>>ch1;
  }while(ch1=='Y'||ch1=='y');

}
