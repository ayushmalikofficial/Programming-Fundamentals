#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>

void main()
{
clrscr();
char ch;
fstream f1;

f1.open("Temp",ios::out,ios::in);
f1<<"Ashish Details :\n1.Height: 6 ft\n2.Weight 71kg\n3.Percentage 95%\n ";
f1.close();
cout<<"Text :\n\n\nAshish Details :\n1.Height: 6 ft\n2.Weight 71kg\n3.Percentage 95%\n ";
getch();

cout<<endl<<endl;

f1.open("Temp",ios::in);
while(f1.get(ch))
{
if(isdigit(ch))
cout<<" ";
else
cout<<ch;
}

f1.close();

getch();
}