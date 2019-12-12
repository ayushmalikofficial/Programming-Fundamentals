//----------------------Array searching and sorting------------------------

#include<iostream.h>
#include<conio.h>
#include<process.h>

void mergesort();
void accept(int [],int &);
void display(int [],int );
void linearsearch(int [],int);
void bubblesort(int [],int);
void binarysearch(int [],int);
void selectionsort(int [],int);
void insertionsort(int [],int);
void concatenate();

void swap(int &x,int &y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	/*
	temp=x;
	x=y;
	y=temp;
	 */
}

void mainmenu(int A[],int &n)
{


char ch;


	clrscr();
	cout<<"\n\n\n\n\t\t\t\t-\4\4MAIN MENU\4\4-";
	cout<<"\n\n\n\t\t\t\t1.Enter A New Array";
	cout<<"\n\n\t\t\t\t2.Binary Search ";
	cout<<"\n\n\t\t\t\t3.Linear Search";
	cout<<"\n\n\t\t\t\t4.Bubble Sort  ";
	cout<<"\n\n\t\t\t\t5.Selection Sort ";
	cout<<"\n\n\t\t\t\t6.Insertion Sort";
	cout<<"\n\n\t\t\t\t7.Display the Array";
	cout<<"\n\n\t\t\t\t8.Merging Sort";
	cout<<"\n\n\t\t\t\t9.Concatination";
	cout<<"\n\n\t\t\t\t0.Exit         ";
	cout<<"\n\n\t\t\t\tEnter Your Choice : ";
	cin>>ch;
	switch(ch)

	{
		case '1':
			accept(A,n);
			mainmenu(A,n);
			break;
		case '2':
			binarysearch(A,n);
			break;
		case '3':
			linearsearch(A,n);
			break;
		case '4':
			bubblesort(A,n);
			display(A,n);
			mainmenu(A,n);
			break;
		case '5':
			selectionsort(A,n);
			break;
		case '6':
			insertionsort(A,n);
			break;

		case '7':
			display(A,n);
			break;
		case '8':
			mergesort();
			break;
		case '9':
			concatenate();
			break;

		case '0':
			exit(0);
			break;
		default:
		cout<<"\n\n\t\t\t\tINVALID CHOICE KINDLY RE-ENTER";
		getch();
		mainmenu(A,n);


	}


}


void main()
{

	int A[100],n;
	accept(A,n);
	mainmenu(A,n);
	getch();

}



void accept(int A[],int &n)
{
     clrscr();
     cout<<"\nEnter The Total No. of Elements Of the Array (MAX=100) : ";
     cin>>n;

   for(int i=0;i<n;i++)
	{
	cout<<"Enter "<<i+1<<" element : ";
	cin>>A[i];
	}
     getch();

}

void display(int A[],int n)
{

     clrscr();
     cout<<"\n\n\nElements Of The Array : \n\n";


   for(int i=0;i<n;i++)
	{
	cout<<A[i]<<" ";
	}
     getch();

    mainmenu(A,n);
}

void linearsearch(int A[],int n)
{

clrscr();
int pos=0,s,flag=0;

	cout<<"\n\nEnter the element to be found in the array : ";
	cin>>s;
	for(int i=0;i<n;i++)
	{
	    if(A[i]==s)
	      {
		flag=1;
		pos=i+1;
		break;
		}
       }
       if(flag==1)
       cout<<"\n\nElement found at "<<pos<<" position";
       else
       cout<<"\n\nSorry ! Element Not Found ";

getch();
mainmenu(A,n);

}



void bubblesort(int A[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
		if(A[j]>A[j+1])
		swap(A[j],A[j+1]);
		}

	 }


}


void binarysearch(int A[],int n)
{

clrscr();
cout<<"\n\nNOTE:- Binary Search Will Automatically Sort The Array";
getch();
clrscr();

int mid,pos,s,flag=0,i,beg=0,last=n-1;

	cout<<"\n\nEnter the element to be found in the array : ";
	cin>>s;

	bubblesort(A,n);

	while(beg<last)
		{
		    mid=(beg+last)/2;
		    if(s==A[mid])
		    {
		    flag=1;
		    pos=mid+1;
		    break;
		    }
		    else if(s<A[mid])
		    last=mid-1;
		    else
		    beg=mid+1;
		 }

	if(flag==1)
	cout<<"\n\nElement found at "<<pos<<" position";
	else
	cout<<"\n\nSorry ! Element Not Found ";

getch();
mainmenu(A,n);


}

void selectionsort(int A[],int n)
{


	int small,i,j;
	for(i=0;i<n-1;i++)
	{ small=i;
	   for(j=i+1;j<n;j++)
	   {
	   if(A[small]>A[j])
	    small=j;
	   }
	 swap(A[small],A[i]);
	}

	display(A,n);



}


void insertionsort(int A[],int n)
{

int temp,i,j;

	for(i=1;i<n;i++)
	{
		temp=A[i];
		j=i-1;
	   while(A[j]>temp&&j>=0)
	   {
	     A[j+1]=A[j];
	     j--;
	   }

	   A[j+1]=temp;
	}


	display(A,n);



}

void mergesort()
{

clrscr();
cout<<"\n\nNOTE:- Merging Will Accept 2 New Arrays which are not accessable further";
getch();

	int n,m,a[50],b[50],c[100],i,j,k;

clrscr();
gotoxy(34,20);
cout<<"First Array";
getch();
	accept(a,n);

clrscr();
gotoxy(34,20);
cout<<"Second Array";
getch();
	accept(b,m);


	clrscr();

	cout<<"\n\nArray 1 : \n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"  ";


	cout<<"\n\nArray 2 : \n";
	for(i=0;i<m;i++)
	cout<<b[i]<<"  ";

	bubblesort(a,n);
	bubblesort(b,m);


	getch();

	i=j=k=0;

	while(i<n&&j<m)
	{
	  if(a[i]>b[j])
	     c[k++]=b[j++];
	  else if(a[i]<b[j])
	    c[k++]=a[i++];
	  else
	   {
	   c[k++]=a[i++];
	   c[k++]=b[j++];
	   }

	 }
	if(i<n)
	   while(i<n)
	    c[k++]=a[i++];

	else if(j<m)
	   while(j<m)
	    c[k++]=b[j++];

       display(c,m+n);

}
void concatenate()
{

clrscr();
cout<<"\n\nNOTE:- Concatenation Will Accept 2 New Arrays which are not accessable further";
getch();

	int n,m,a[50],b[50],c[100],i,k;

clrscr();
gotoxy(34,20);
cout<<"First Array";
getch();
	accept(a,n);

clrscr();
gotoxy(34,20);
cout<<"Second Array";
getch();
	accept(b,m);


	clrscr();

	cout<<"Array 1 : \n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<"\n\n\n";

	cout<<"Array 2 : \n";
	for(i=0;i<m;i++)
	cout<<b[i]<<"\t";

	getch();

	i=k=0;

	for(i=0;i<n;)
	c[k++]=a[i++];

	for(i=0;i<m;)
	c[k++]=b[i++];


       display(c,m+n);

}