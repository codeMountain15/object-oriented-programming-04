// simple_function.cpp
//

#include <iostream>
#include <string>

using namespace std;

// function with default value: age = 20
void myf(string name, int age = 20) {
	cout << name << " is " << age << " years old. \n";
}

int main() {
	myf("Mary");
	myf("George", 2);
	myf("Zachos", 40);

	return 0;
}
