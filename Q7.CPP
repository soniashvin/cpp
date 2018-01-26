#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<iostream.h>
class Stud
{
char section,name[30];
int year,clas;
public:
 void enter()
 {
	     cout<<"Enter the Name:";
		cin>>name;
		cout<<"Enter the Class:";
		cin>>clas;
		cout<<"Enter the Section:";
		cin>>section;
		cout<<"Enter the Year of admission:";
		cin>>year;
 }
 void showdata(char *temp)
 {
     fstream fs;
     fs.open("Student.txt",ios::in);
      while(fs.read((char*)this,sizeof(*this)))
      {
       if(strcmp(name,temp)==0)
	{
	    cout<<"Class:"<<clas<<"\t"<<section;
	    cout<<"\nName:"<<name;
	    cout<<"\\nnYear:"<<year;
	    return;
	}
      }
      cout<<"NO RECORD FOUNd";
 }
 void update(char *temp)
 {
      fstream fs;
     fs.open("student.txt",ios::in);
      while(fs.read((char*)this,sizeof(*this)))
      {
       if(strcmp(number,temp)==0)
	{
	     fstream t;
	     t.open("student.txt",ios::out|ios::ate);
	     t.seekg(fs.tellg()-sizeof(*this),ios::beg);
	     cout<<"\nUPDATE::\n";
	     cout<<"Enter name:";
	     cin>>name;
	     cout<<"Enter class:"
		t.write((char*)this,sizeof(*this));
	     fs.close();
	     t.close();
	     return;

	}
      }
       cout<<"Number not found";
 }

};
void main()
{
fstream f;
student s;
char o,temp[11],x;

f.close();
while(1)
{   clrscr();
   cout<<"Enter Your Choice";
   cout<<endl<<"1.Register Student"<<endl<<"2.Show Details\n";
   cout<<"3.Update:\n";
   cout<<endl<<"Space to Exit\n"<<"Enter Your Choice:";
   o=getch();
   switch(o)
   {
	case '1':s.enter();
			f.open("student.txt",ios::app);

		  f.write((char*)&t,sizeof(t));
		  f.close();
		break;

	case '2':
		    cout<<"Enter the name to search:";
		    cin>>temp;
		    s.showdata(temp);
		    getch();break;
	case '3': cout<<"Enter the name to update:";
		cin>>temp;
		s.update(temp);
			break;
	default: exit(0);


   }

 getch();
}

}
