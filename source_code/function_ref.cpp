// function_ref.cpp
//

#include <iostream>
using namespace std;


void num_swap(int& x, int& y) {
	
	int z = x;
	x = y;
	y = z;
}

int main() {
	int num1 = 10;
	int num2 = 20;

	cout << "Before swapping: " << endl;
	cout << num1 << "  " << num2 << endl;

	// Call the function, which will change the values of firstNum and secondNum
	num_swap(num1, num2);

	cout << "After swapping: " << endl;
	cout << num1 << "  " << num2 << endl;

	return 0;
}
