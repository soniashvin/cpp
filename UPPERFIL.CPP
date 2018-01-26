#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<fstream.h>
 void main()
 {
  fstream fs;

  fs.open("filr.txt",ios::out);
  char s[30];
  cin.getline(s,30);
  fs<<s;
  fs.close();
  //
  fs.open("filr.txt",ios::in);
  char c;
  fs.get(c);
  int count=0;

  while(c!=EOF)
  {
     if(c>='A'&& c<='Z')
	{
	count++;
	}
     fs.get(c);
  }
cout<<count;
  getch();

 }