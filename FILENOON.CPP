#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<fstream.h>
 void main()
 {
 int fl=0;
  fstream fs,temp;

  fs.open("filr.txt",ios::out);
  char s[30];
  cin.getline(s,30);
  fs<<s;
  fs.close();
 ////
 {
  fs.open("filr.txt",ios::in);
  char c,f;
  temp.open("filr.txt",ios::in);
  fs.get(c);
  temp.get(f);
  temp.get(f);
  int count=0;

  while(c!=EOF)
  {
     if(c=='I'||c=='i'&& f=='s'|| f=='S')
	{
		temp.get(f);
		fs.seekg(-2,ios::cur);
		fs.get(c);
		if((c==' '||c=='.' ) &&( f==' '||f=='.'||f==EOF) )
		      {
			count++;
			fs.seekg(2,ios::cur);
			fs.get(c);
			temp.get(f);
			}
		else
		{
		 fs.seekg(1,ios::cur);

		 fs.get(c);
		}
	}
	else
	{
	fs.get(c);
	temp.get(f);
	}
  }
cout<<count;
  getch();

 }