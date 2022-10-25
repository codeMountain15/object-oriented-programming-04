// const_freziness.cpp
//

#include <iostream>
using namespace std;

int main()
{
	const char* dish1 = "Seftalia";		// pointer to constant
	cout << dish1 << endl;

	dish1++;
	cout << dish1 << endl;			// dish1[0] = 's'; // error

	// -----------------------------------------------------------

	char food[] = "Chaloumi";
	const char* dish2 = food;		// another pointer to constant
	food[0] = 'c';
	cout << dish2 << endl;
						// dish2[0] = '9'; // error
	dish2 = "Chaloumi!!!";			// permitted!

	// -----------------------------------------------------------

	char* const dish3 = food;		// constant pointer
	dish3[7] = '1';
	cout << dish3 << endl;
						// dish3 = "Chaloumi uber alles"; //-> error
	
	// -----------------------------------------------------------

	//const char *const dish4 = food;	// cannot change anything

	return 0;
}
