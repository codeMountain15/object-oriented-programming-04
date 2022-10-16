// pointers01.cpp
//

#include <iostream>
using namespace std;

int main(){

	bool b = 1;
	bool* a = &b;
	
	cout << "&b = " << (int)&b << endl;
	cout << " a = " << (int)a << endl;
	cout << "&a = " << (int)&a << endl;
	cout << "*a = " << *a << endl << endl;

	a++;
	cout << endl << "a++;" << endl;
	cout << " a = " << (int)a << endl;
	cout << "&a = " << (int)&a << endl;
	cout << "*a = " << *a << endl << endl;

	cout << "The size of a = " << sizeof(a) << endl;
	cout << "The size of *a = " << sizeof(*a) << endl;
	cout << "The size of b = " << sizeof(b) << endl; // size of boolean = 1

	return 0;
}
