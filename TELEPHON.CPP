#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<iostream.h>
class telephone
{
char number[13],name[30];
public:
 void enter()
 {
	cout<<"Enter the telphone number:";
	for(int i=0;i<10;i++)
	     number[i]=getche();
	     cout<<"Enter the Name:";
		cin>>name;
 }
 void showdata(char *temp)
 {
     fstream fs;
     fs.open("TEXT3.txt",ios::in);
      while(fs.read((char*)this,sizeof(*this)))
      {
       if(strcmp(number,temp)==0)
	{
	    cout<<number;
	    cout<<"\n"<<name;
	    break;
	}
      }
 }
 void del()
 {                int x=0;
	fstream fs,temp;
	fs.open("TEXT3.txt",ios::in);
	temp.open("TEMPRORY.txt",ios::out);
	char num[13];
	cout<<"Enter NUmber to delete";
	cin>>num;
	while(fs.read((char*)this,sizeof(*this)))
	{
		if(strcmp(num,number)!=0) {
	   temp.write((char*)this,sizeof(*this));
	   x=1;
	   }

	}
	fs.close();
	temp.close();
	temp.open("TEMPRORY.txt",ios::in);

	fs.open("Text3.txt",ios::out);
	while(temp.read((char*)this,sizeof(*this)))
		fs.write((char*)this,sizeof(*this));

	       if(x)
		cout<<"Record Deleted";
		else
		cout<<"No match found";
		fs.close();
		temp.close();
 }
 char check(char *tem)
 {
     fstream fs;
     fs.open("TEXT3.txt",ios::in);
      while(fs.read((char*)this,sizeof(*this)))
      {
       if(strcmp(number,tem)==0)
	{
		return 'a';
	}
      }
      return 'b';
 }
 void update(char *temp)
 {
      fstream fs;
     fs.open("TEXT3.txt",ios::in);
      while(fs.read((char*)this,sizeof(*this)))
      {
       if(strcmp(number,temp)==0)
	{
	     fstream t;
	     t.open("TEXT3.txt",ios::out|ios::ate);
	     t.seekg(fs.tellg()-sizeof(*this),ios::beg);
	     cout<<"Enter name:";
	     cin>>name;
		t.write((char*)this,sizeof(*this));
	     fs.close();
	     t.close();
	     return;

	}
      }
       cout<<"Number not found";
 }
 static void count()

 {
      fstream fs;
      fs.open("Text3.txt",ios::in);
     fs.seekg(0,ios::end);
	cout<< (int)fs.tellg()/sizeof(telephone);
	getch();
 }

};
void main()
{
fstream f;
telephone t;
char o,temp[11],x;

f.close();
while(1)
{   clrscr();
   cout<<"Enter Your Choice";
   cout<<endl<<"1.Register User"<<endl<<"2.Show Details\n";
   cout<<"3.Check Telephone number:"<<endl;
   cout<<"4.Update:\n";
   cout<<"5.Delete:\n";
   cout<<"6.Total Record:";
   cout<<endl<<"Space to Exit\n"<<"Enter Your Choice:";
   o=getch();
   switch(o)
   {
	case '1':t.enter();
			f.open("text3.txt",ios::app);

		  f.write((char*)&t,sizeof(t));
		  f.close();
		break;

	case '2':
		    cout<<"Enter the telephone number:";
		    cin>>temp;
		    t.showdata(temp);
		    getch();break;
	case '3': cout<<"Enter Telephone number:";
		cin>>temp;
		x=t.check(temp);
		if(x=='a')
		cout<<"Valid";
		else
		cout<<"invalid";
			break;
	case '4':cout<<"Enter the telephone number:";
		    cin>>temp;
		  t.update(temp);

		  break;
	case '5':t.del();break;
	case '6':telephone::count();break;
	default: exit(0);


   }

 getch();
}

}
