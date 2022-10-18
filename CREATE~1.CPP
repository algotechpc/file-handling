
// creation of new file and write content inside file using c++
#include <iostream.h>
#include <fstream.h>
#include<conio.h>
void main()
{
ofstream myfile("newfile2.txt");      // file is created inside bin folder , pls check file in bin folder
file<<"Hi,welcome to Amity University";  // content is written into newfile2.txt
myfile.close();                                           //close the file
getch();
}
