#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  char ch,ch1,ch2;
  cout<<"\n\n";
  cout<<"Enter the Character : ";
  cin>>ch;
  cout<<"Enter the Character : ";
  cin>>ch1;
  ch2=ch+ch1;
  cout<<"\nch1+ch : "<<ch+ch1;
  cout<<"\nch2 "<<ch2;
  cout<<"\n(int)(ch1+ch) "<<(int)(ch+ch1);
  cout<<"\n(char)(ch1+ch) "<<(char)(ch+ch1);
  cout<<"\n(char)(ch1)+(char)(ch) "<<(char)(ch1)+(char)(ch);


  getch();
 }
