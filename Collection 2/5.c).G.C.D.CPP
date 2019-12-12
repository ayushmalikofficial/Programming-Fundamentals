#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int n,m,hcf=1;
cout<<"Enter 2 No.s :";
cin>>n>>m;
if(m>n)
{
for(int i=0;i<n;i++)
{
	if(n%i==0 && m%i==0)
	{
	if(i<hcf)
	hcf=i;
	}

}
}
else if(m<n)
{
for(int i=0;i<m;i++)
{
	if(n%i==0 && m%i==0)
	{
	if(i<hcf)
	hcf=i;
	}

}
}
else
hcf=m=n;

cout<<"\nH.C.F. Of "<<n<<" & "<<m<<" : "<<hcf;

getch();
}