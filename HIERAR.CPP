#include<iostream.h>
#include<conio.h>

class student
{
int age;
char name[30];
public:

void getdata()
{
	cout<<"enter name of student";
	cin>>name;
	cout<<"enter age:\t\t";
	cin>>age;

}
void showdata()
{
	cout<<"\n name of student:\t"<<name;
	cout<<"\n age of student:\t"<<age<<endl;
}
};

class data:public student
{
int ctno;
public:

void getdata()
{       student::getdata();
	cout<<"ctno of student:\t";
	cin>>ctno;
}
void display()
{
student::showdata();
cout<<"\ctno of student:\t"<<ctno<<endl;
}
};


class setdata:public student
{
char city[20];

public:
void getdata()
{       student::getdata();
	cout<<"enter city";
	cin>>city;
}

void display()
{
	student::showdata();
	cout<<"city of student:\t"<<city;

}
};

int main()
{
clrscr();
data da;
setdata se;
da.getdata();
se.getdata();
clrscr();
da.display();
se.display();
getch();
return(0);
}

