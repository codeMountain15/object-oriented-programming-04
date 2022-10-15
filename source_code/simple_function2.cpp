// simple_function2.cpp
//

#include <iostream>
#include <string>

using namespace std;

int rectangle_area(int, int);

int main() {
	
	int a1, a2;

	cout << "Give the dimensions of the rectangle \n";
	cin >> a1 >> a2;
	cout << "The result is: " << rectangle_area(a1, a2);

	return 0;
}

int rectangle_area(int x, int y) {

	return x * y;
}
