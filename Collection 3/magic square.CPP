#include<iostream.h>
#include<conio.h>

int magicsquare(int a[][20],int n)
{

	int r[20]={ 0 },c[20]={ 0 },s1=0,s2=0,i,j;

	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	    if(i==j)
	    s1+=a[i][j];
	    if((i+j)==n-1)
	    s2+=a[i][j];
	   }
       }

	 if(s1!=s2)
	 return 0;

      for(i=0;i<n;i++)
	 {
	    for(j=0;j<n;j++)
	     {
	     r[i]+=a[i][j];
	     c[i]+=a[j][i];
	     }

	if(r[i]!=s1||c[i]!=s2)
		return 0;

       }

return 1;

}
void main()
{
clrscr();

int a[20][20],n,i,j;

cout<<"\nEnter the size of the matrix : ";
cin>>n;

cout<<"\nEnter the elements of the matrix : \n";


for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    cin>>a[i][j];

if(magicsquare(a,n))
	cout<<"It is a magic square";
else
	cout<<"it is not a magic square ";


getch();
}