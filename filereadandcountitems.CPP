/*
Read the listed item and count the items using c++
Grapes
Apple
Mango
kiwi
banana
output: items =5
*/

#include<iostream.h>
#include<stdio.h>
#include<fstream.h>
#include<conio.h>
void main()
{
char line[100];
ifstream file;
file.open("newfile4.txt")  ;
if(file.fail())
{
cout<<"error";
}
  int count =0;
  while(!file.eof())
  {
  file>>line;
  cout<<line<<endl;
  count++;
  }

cout<< "items are"<<count;
getch();
}
