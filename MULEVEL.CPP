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

class data :public student
{
protected:
int m1,m2,m3,total;
float per;
public:

void marks()
{
	cout<<"enter first marks:\t";
	cin>>m1;
	cout<<"enter second marks:\t";
	cin>>m2;
	cout<<"enter third marks:\t";
	cin>>m3;

	total=m1+m2+m3;
	per=total/3.0;
}
};


class display: public data
{
public:
void showdata()
{
	cout<<"roll no of student:\t"<<roll;
	cout<<"\n name of student:\t"<<name;
	cout<<"\n first marks of student:\t"<<m1;
	cout<<"\n second marks of student:\t"<<m2;
	cout<<"\n third marks of student:\t"<<m3;
	cout<<"\n total of marks:\t"<<total;
	cout<<"\n per of student:\t"<<per;
}
};

int main()
{
clrscr();
display d1;
d1.getdata();
d1.marks();
d1.showdata();
getch();
return(0);
}

