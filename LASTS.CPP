#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<fstream.h>
 void main()
 {
  fstream fs,temp;

  fs.open("filr.txt",ios::out);
  char s[30];
  cin.getline(s,30);
  fs<<s;
  fs.close();
  fs.open("filr.txt",ios::in);
  char c,f;
  temp.open("filr.txt",ios::in);
  fs.get(c);
  temp.get(f);
  temp.get(f);
  int count=0,x=0;

  while(c!=EOF)
  {
     if(c=='S'||c=='s' && f==' ' || f=='.'|| f==EOF )
	{
			count++;
	}
     fs.get(c);
     if(f!=EOF)
     temp.get(f);

  }
cout<<count;
  getch();

 }