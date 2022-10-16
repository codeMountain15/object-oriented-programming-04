// f_by_reference02.cpp

#include <iostream>
using namespace std;

void myf(char& char2) {
	char2 = 'B';
}

int main() {

	char char1 = 'A';

	cout << "\nBefore the function call:\n";
	cout << "char1 = " << char1 << "\n";
	cout << "&char1 = " << (int)&char1 << "\n";
	
	myf(char1);
	
	cout << "\nAfter the function call:\n";
	cout << "char1 = " << char1 << "\n";
	cout << "&char1 = " << (int)&char1 << "\n";
}
