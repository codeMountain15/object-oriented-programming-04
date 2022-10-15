// func_overl01.cpp
//

#include <iostream>
#include <string>

using namespace std;

int add(int x, int y) {
	return x + y;
}

double add(double x, double y) {
	return x + y;
}

string add(string x, string y) {
	return x + y;
}

int main() {
	
	int integer_sum = add(1, 2);
	double double_sum = add(5.1, 3.25);
	string string_add = add("Mia fora kai enan kairo, ", "pige i gata ston xoro");
	
	cout << "The results are: \n";
	cout << "Integer version -> " << integer_sum << "\n";
	cout << "Double version -> " << double_sum << "\n";
	cout << "String version -> " << string_add << "\n";

	return 0;
}
