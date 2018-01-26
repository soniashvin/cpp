#include<iostream.h>
#include<conio.h>

class arithmetic
{
protected:
int m1,m2;
public:

void getdata()
{
	cout<<"enter first marks";
	cin>>m1;
	cout<<"enter enter second marks";
	cin>>m2;

}
};

class add:public arithmetic
{
protected:
int sum;
public:

void addition()
{
	sum=m1+m2;
}
};


class sub
{
protected:
int n1,n2,n3;
public:
void subtraction()
{
	cout<<"enter first marks";
	cin>>n1;

	cout<<"enter second marks";
	cin>>n2;
	n3=n1-n2;
}
};


class result:public add,public sub
{
public:
void display()
{
cout<<"\n sum of"<<m1<<"and"<<m2<<"="<<sum;

cout<<"\n sub of"<<n1<<"and"<<n2<<"="<<n3;

}
};

void main()
{
clrscr();
result r1;
r1.getdata();
r1.addition();
r1.subtraction();
r1.display();
getch();
}

