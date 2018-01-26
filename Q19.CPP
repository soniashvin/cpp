#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<fstream.h>
 void main()
 {
  fstream fs,temp;

  fs.open("char.txt",ios::out);
  char s[30];
  cin.getline(s,30);
  fs<<s;
  fs.close();
  fs.open("char.txt",ios::in);
  char c;
  fs.get(c);
  int count=0,x=0;

  while(c!=EOF)
  {
	count++;
     if(c==' ' )
	{
	x++;
	}
     fs.get(c);

  }
  if(count)
  x++;

cout<<"Words"<<x<<"Character="<<count;
  getch();

 }