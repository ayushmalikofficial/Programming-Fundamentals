#include<fstream.h>
#include<conio.h>

void main()
{

clrscr();


fstream f1,f2;
char ch;

f1.open("ayush1.txt",ios::in|ios::binary);
f2.open("ayush2.txt",ios::out|ios::binary);

clrscr();
cout<<"Contents of file 1 \n\n";
while(f1.get(ch))
{
  cout<<ch;

}
getch();

f1.close();

f1.open("ayush1.txt",ios::in|ios::binary);
clrscr();
cout<<"Contents of file 2  after copying\n\n";

while(f1.get(ch))
{
  f2.put(ch);
}
f2.close();

f2.open("ayush2.txt",ios::in|ios::binary);

while(f2.get(ch))
{
  cout<<ch;
}


f1.close();
f2.close();

getch();

}