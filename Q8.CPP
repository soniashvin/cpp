#include<iostream.h>
#include<conio.h>
class address
{
int hno;
char city[10];
public:

	void getdata()
	{
	cout<<"Enter the House number";
	cin>>hno;
	cout<<"Enter the City:";
	cin>>city;


	}

	void showdata()
	{
		cout<<endl<<hno;
		cout<<endl<<city;
	}
};
class employee
{
	char name[15];
	int salary;
	public:
	void getdata()
	{
		address a;
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter salary:";
		cin>>salary;
		a.getdata();
	}

	void showdata()
	{
		address a;
		cout<<name;
		cout<<endl<<salary;
		a.showdata();
	}


};

void main()
{
      employee em;
      em.getdata();
      em.showdata();
}