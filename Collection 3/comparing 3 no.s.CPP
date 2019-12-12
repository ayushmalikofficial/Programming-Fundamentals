#include<iostream.h>
#include<conio.h>

void compare(int x,int y,int z)
{
	if(x>y&&x>z)
	  {
		if(y>z)
		cout<<x<<" is the largest no.\n"<<y<<" is the 2nd largest no.\n"<<z<<" is the smallest no.";
		else if(z>y)
		cout<<x<<" is the largest no.\n"<<z<<" is the 2nd largest no.\n"<<y<<" is the smallest no.";
	  }
	else if(y>x&&y>z)
	  {
		if(x>z)
		cout<<y<<" is the largest no.\n"<<x<<" is the 2nd largest no.\n"<<z<<" is the smallest no.";
		else if(z>x)
		cout<<y<<" is the largest no.\n"<<z<<" is the 2nd largest no.\n"<<x<<" is the smallest no.";
	  }
	else if(z>y&&z>x)
	  {
		if(y>x)
		cout<<z<<" is the largest no.\n"<<y<<" is the 2nd largest no.\n"<<x<<" is the smallest no.";
		else if(x>y)
		cout<<z<<" is the largest no.\n"<<x<<" is the 2nd largest no.\n"<<y<<" is the smallest no.";
	  }
	else
	cout<<"\nSorry Enter all 3 Distinct Elements only ";

}
void main()
{
	clrscr();
	int x,y,z;
	cout<<"Enter 3 Distinct No.'s : ";
	cin>>x>>y>>z;
	compare(x,y,z);
	getch();
}

