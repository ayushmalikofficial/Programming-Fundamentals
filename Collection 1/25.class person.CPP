#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class person
{
protected :
	char name[20];
	char age[3];

public :

virtual void accept()=0;
virtual void display()=0;

};

class teacher : public person
{
  char sub[15];

  public :
  virtual void accept() ;
  virtual void display();

};

void teacher :: accept()
{
 clrscr();
	 cout<<"\nEnter the Name of the teacher : ";
	 gets(name);
	 cout<<"\nEnter the Age : ";
	 gets(age);
	 cout<<"\nEnter the Department : ";
	 gets(sub);
getch();

}


void teacher :: display()
{

 clrscr();
 cout<<"DETAILS OF THE TEACHER : \n\n";
 cout<<"Name : "<<name;
 cout<<"\nAge : "<<age;
 cout<<"\nDepartment : "<<sub;

 getch();

}

class student : public person
{
   float per;
   public :
   virtual void accept();
   virtual void display();

} ;

void student :: accept()
{

 clrscr();
	 cout<<"\nEnter the Name of the Student : ";
	 gets(name);
	 cout<<"\nEnter the Age : ";
	 gets(age);
	 cout<<"\nEnter the Percentage : ";
	 cin>>per;
 getch();

}

void student :: display()
{

 clrscr();
 cout<<"DETAILS OF THE STUDENT : \n\n";
 cout<<"Name : "<<name;
 cout<<"\nAge : "<<age;
 cout<<"\nPercentage "<<per;
 getch();

}

void main()
{

    person *obj;
    obj = new teacher;
    obj->accept();
    obj->display();
    delete obj;
    obj = new student;
    obj->accept();
    obj->display();
    delete obj;



}