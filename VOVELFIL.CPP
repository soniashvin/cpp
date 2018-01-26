#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<fstream.h>
 void main()
 {
  fstream fs,temp;

  temp.open("TEXT2.txt",ios::out);
  fs.open("TEXT1.txt",ios::in);
  char c,f;
  fs.get(c);
  int count=0,flag=0;

  while(c!=EOF)
  {
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
       {

	   while(c!=' '&&c!=EOF &&c!='.')
	   {    temp.put(c);
		fs.get(c);
													   }
	   temp.put(' ');

       }
       else
       {
	fs.get(c);
       }
  }
cout<<"SUCCESS	";
  getch();

}