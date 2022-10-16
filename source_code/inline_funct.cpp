// inline_funct.cpp
//

#include <iostream>

using namespace std;

inline int kyvos (int r)
{
	return r * r * r;
}

int main()
{
	int num;

	cout << "Give a number: ";
	cin >> num;
	cout << "\nThe cube of " << num << " is: " << kyvos(num) << "\n";
  
	return 0;
}
