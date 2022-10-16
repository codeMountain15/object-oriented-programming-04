// references01.cpp
//

#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';

    // ref_alternative becomes a reference to ch
    char& rfn = ch;

    // Value of ch will become B
    rfn = 'B';
    cout << "ch = " << ch << '\n';

    // Value of ch will become C
    ch = 'C';
    cout << "rfn = " << rfn << '\n';

    return 0;
}
