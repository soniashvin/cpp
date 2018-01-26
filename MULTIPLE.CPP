#include<iostream.h>
#include<conio.h>

class student
{
protected:
int roll;
char name[30];
public:

void getdata()
{
	cout<<"enter roll no of student";
	cin>>roll;
	cout<<"enter name of student";
	cin>>name;
}
};

class data
{
protected:
int age,ctno;
public:

void setdata()
{
	cout<<"enter age:\t";
	cin>>age;
	cout<<"enter ctno:\t";
	cin>>ctno;
}
};


class display:public student,public data
{
public:
void showdata()
{
	cout<<"roll no of student:\t"<<roll;
	cout<<"\n name of student:\t"<<name;
	cout<<"\n age of student:\t"<<age;
	cout<<"\n ctno of student:\t"<<ctno;
}
};

int main()
{
clrscr();
display d1;
d1.getdata();
d1.setdata();
d1.showdata();
getch();
return(0);
}

