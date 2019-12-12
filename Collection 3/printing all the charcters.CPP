#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i=97;
cout<<"\n"<<(char)i;

for(i=0;i<=256;i++)
{
if(i==26)
continue;
cout<<"   \n"<<i<<" "<<(char)i;
}
 getch();
}