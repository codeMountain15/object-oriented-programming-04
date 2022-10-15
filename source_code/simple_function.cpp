// simple_function.cpp
//

#include <iostream>
#include <string>

using namespace std;

void myFunction(string name, int age) {
	cout << name << " is " << age << " years old. \n";
}

int main() {
	myFunction("Mary", 37);
	myFunction("George", 2);
	myFunction("Zachos", 40);

	return 0;
}
