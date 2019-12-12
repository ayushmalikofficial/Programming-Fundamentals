#include<iostream.h>
#include<conio.h>
#include<process.h>

//Array Menu Driven Program


void deletion(int a[],int &n)
{
 clrscr();
 int i,j,k,flag=0,cnt=0;
	for(i=1;i<n;i++)
	 {
		flag=0;
		for(j=i-1;j>=0;j--)
		 {
		if(a[i]==a[j])
			{
			cnt++;
			for( k=i;k<n;k++)
			a[k]=a[k+1];
			n--;
			flag=1;
			}

		}
	 if(flag==1)
	 i--;
	 }

  for(i=0;i<n;i++)
	{
	 cout<<a[i]<<"  ";
	}


  getch();
}

void sumavg(int a[],int n)
{
	clrscr();
	int s=0;
	float avg;
	for(int i=0;i<n;i++)
	{
	s=s+a[i];
	}
	avg=s/n;
	cout<<"\nSum of Elements in the Array : "<<s;
	cout<<"\nAverage Elements in the Array : "<<avg;
	getch();

}

void oddeven(int a[],int n)
{       clrscr();
	int o=0,e=0;
	for(int i=0;i<n;i++)
	{
	if(a[i]%2==0)
	e++;
	else
	o++;
	}
	cout<<"\nNo. of odd elements of the entered array : "<<o;
	cout<<"\nNo. of even elements of the entered array : "<<e;
       getch();
}

void maxmin(int a[],int n)
{     clrscr();

	int max,min;

	max=a[0],min=a[0];
	for(int i=0;i<n;i++)
	{
	if(a[i]>max)
	max=a[i];
	else if(a[i]<min)
	min=a[i];
	}
	cout<<"\nMaximum Element in the Array : "<<max;
	cout<<"\nMinimum Element in the Array : "<<min;


	getch();
}

void reverse(int a[],int n)
{
	clrscr();
	cout<<"\nReversed Array : \n";
	for(int i=n-1;i>0;i--)
	{
	 cout<<a[i]<<"  ";
	}
	getch();

}


void display(int a[],int n)
{

	clrscr();
	cout<<"\nEntered Array : \n";

	for(int i=0;i<n;i++)
	{
	 cout<<a[i]<<"  ";
	}
	getch();
}



void main()
{
	clrscr();
	int ch,n, a[25];
	char ch1;

	cout<<"\nEnter The No. Of Elements Of The Array :";
	cin>>n;
	if(n!=0)
	{
	cout<<"\nEnter the Elements Of the Array :\n";

	for(int i=0;i<n;i++)
	{
	cout<<"Enter the "<<i+1<<" element : ";
	cin>>a[i];
	}


	do
	{

	clrscr();
	cout<<"\n\n\n\n\n\n\t\t\tMAIN MENU ";
	cout<<"\n\t\t\t1.SUM & AVERAGE";
	cout<<"\n\t\t\t2.EVEN AND ODD";
	cout<<"\n\t\t\t3.REVERSE";
	cout<<"\n\t\t\t4.MAX AND MIN";
	cout<<"\n\t\t\t5.DELETION OF COMMON ELEMENTS";
	cout<<"\n\t\t\t6.DISPLAY THE ARRAY";
	cout<<"\n\t\t\t0.EXIT";
	cout<<"\n\t\t\tEnter Your Choice : ";
	cin>>ch;

	switch(ch)
	{

	 case 1:
	 sumavg(a,n);
	 break;

	 case 2:
	 oddeven(a,n);
	 break;

	 case 3:
	 reverse(a,n);
	 break;

	 case 4:
	 maxmin(a,n);
	 break;

	 case 5:
	 deletion(a,n);
	 break;

	 case 6:
	 display(a,n);
	 break;

	 case 0:
	 exit(0);
	 break;

	 default:
	 cout<<"\n\t\t\tINVALID CHOICE";

	getch();
	}
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tDo you Wish to continue ? (Y/N) : ";
	cin>>ch1;
	}while(ch1=='Y'||ch1=='y');
    }
    else
    cout<<"\nArray is Empty";

getch();

}