// references02.cpp
//

#include <iostream>
using namespace std;

int& dizzy()
{
    int a = 5;

    //what will happen if the line above becomes:
    // static int a = 5;

    return a;
}

int main()
{
    dizzy() = 1;

    cout << "dizzy() = ";
    cout << dizzy();

    return 0;
}
