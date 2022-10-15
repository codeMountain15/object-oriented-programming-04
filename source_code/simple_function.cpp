// simple_function.cpp
//

#include <iostream>
#include <string>

using namespace std;

// function with default value: age = 20
void myFunction(string name, int age = 20) {
	cout << name << " is " << age << " years old. \n";
}

int main() {
	myFunction("Mary");
	myFunction("George", 2);
	myFunction("Zachos", 40);

	return 0;
}
