// point_ref01.cpp
// references dancing with pointers

#include <iostream>
using namespace std;

int main()
{
	size_t a;
	a = 10;
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << endl;

	cout << "New values" << endl;
	size_t& b = a;
	b = 10;
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "&a = " << &a << endl << "&b = " << &b << endl;
	cout << endl;

	size_t* pointer1;
	size_t* pointer2;
	pointer1 = &a;
	pointer2 = &b;

	cout << "pointer1 = &a" << endl << "pointer2 = &b" << endl << endl;

	cout << "pointer1 = " << pointer1 << endl << "pointer2 = " << pointer2 << endl << endl;
	cout << "&pointer1 = " << &pointer1 << endl << "&pointer2 = " << &pointer2 << endl << endl;
	cout << "*pointer1 = " << *pointer1 << endl << "*pointer2 = " << *pointer2 << endl << endl;
	
	
	return 0;
}
