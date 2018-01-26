#include<iostream.h>
#include<conio.h>
template<class s>

class math
{
s one,two;
public:
math(){}
math(s o , s t)
{
	one=o;
	two=t;

}
	void multiply(s o , s t)
	{
		cout<<o*t;
	}
	void div(s o, s t)
	{
		cout<<o/t;
	}

};

void main()
{
clrscr();
	math <int> m1;
	math <float> s2;
	m1.multiply(2,3);
	cout<<endl;
	s2.div(3.4,2.0);
}