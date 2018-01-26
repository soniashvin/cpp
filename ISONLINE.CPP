#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
class USER
{
int uid;
char status,uname[30];
public:
void uregister()
{
	fstream fs;
     cout<<"enter Name:";
     cin>>uname;
     cout<<"Enter UID";
     cin>>uid;
     cout<<"Enter Status A/N";

     cin>>status;
	  fs.open("Active12.txt",ios::out|ios::ate);
		  fs.write((char*)this,sizeof(*this));


}
void showdata()
{
	int id;
	cout<<endl<<"Enter uid:";
	cin>>id;
	fstream fs;
	fs.open("Active12.txt",ios::in);
	int i=1;
	while(	fs.read((char*)this,sizeof(*this)))
	      {
		if(id==uid){
		 cout<<endl<<uid ;
		 cout<<uname;}
	      }
	       /*	if(id==this->	uid)
		{
		cout<<uname;
		cout<<endl<<status;
		getch();
		break;
		}
		else
	       {
		fs.read((((char*)this)),sizeof(*this));
		   i++;
		   if(i==100)
			{
				cout<<"infinite";
				getch();
				exit(0);
			}
	       }}
	if(id!=uid)
	cout<<"not found"; */
}

char isactive()
{
	fstream fs;
	int x;
	fs.open("Active12.txt",ios::in);
       cout<<"Enter the ID to Check:";
       cin>>x;
       while(	fs.read((char*)this,sizeof(*this)))
       {
	    if(uid==x)
		return status;
       }

       cout<<"ID NOT FOUND";
       return 'x';
}

};


void main()
{
fstream fs;

USER e;
char o;

while(1)
	{   clrscr();
   cout<<"Enter Your Choice";
   cout<<endl<<"1.Register User"<<endl<<"2.Show Details"<<endl<<"3.Check Status";
   cout<<endl<<"Space to Exit"<<"Enter Your Choice:";
   o=getch();
   switch(o)
   {
	case '1':e.uregister();
		break;
	case '2':e.showdata();
		getch();
		break;
	case '3':    char c=e.isactive();
		      if(c=='a')
			cout<<"Active";
		      else if(c=='x');
			else
			cout<<"Inactive";
			getch();
			break;
	default: exit(0);


   }


}
}