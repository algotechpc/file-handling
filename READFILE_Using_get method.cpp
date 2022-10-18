//Read the content of file 

#include <iostream.h>
#include <fstream.h>
#include<conio.h>
void main() {

	ifstream my_file;
				  //input file stream
	my_file.open("newfile4.txt");  //open mode of the file
	if (!my_file) {
		cout << "No such file";
	}
	else {
		char ch;
		while (!my_file.eof()) {
		ch = my_file.get();
			cout << ch;
		}
	}
       my_file.close();
	getch();
}