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

class display: public student
{
public:
void showdata()
{
	cout<<"roll no of student:\t"<<roll;
	cout<<"\n name of student:\t"<<name;
}
};

int main()
{
clrscr();
display d1;
d1.getdata();
d1.showdata();
getch();
return(0);
}

