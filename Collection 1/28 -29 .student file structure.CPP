#include<fstream.h>
#include<conio.h>
#include<stdio.h>

struct student
{

	  char rno[7];
	  char name[20];
	  char year[5];
	  float per;

void accept();

};

void student :: accept()
{
clrscr();

	cout<<"\nEnter the Roll No : ";
	gets(rno);
	cout<<"\nEnter the Year : ";
	gets(year);
	cout<<"\nEnter the Name : ";
	gets(name);
	cout<<"\nEnter the Percentage : ";
	cin>>per;

getch();

}


void display()
{

student s1;
fstream f1;

clrscr();
int l=5;

cout<<"\n\nRoll No            Name                  Percentage(%)             Year   ";

f1.open("stud.txt",ios::in|ios::binary);

while(f1.read((char*)&s1,sizeof(s1)))
	{
	gotoxy(3,l);
	cout<<s1.rno;
	gotoxy(20,l);
	cout<<s1.name;
	gotoxy(45,l);
	cout<<s1.per;
	gotoxy(68,l);
	cout<<s1.year;
	l++;
	}


f1.close();

getch();

}

void main()
{

clrscr();

student s1[10];
fstream f1;



f1.open("stud.txt",ios::out|ios::binary);

	for(int i=0;i<10;i++)
	{
	s1[i].accept();
	f1.write((char*)&s1[i],sizeof(s1[i]));
	}


f1.close();


display();

getch();

}