// references_vctr.cpp
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vctr{ 0, 100, 200, 300 };

    // Change the vector elements with references
    for (int& ref : vctr) {
        ref = ref * 2;
    }

    // And the new elements are:
    for (int elmnt : vctr) {
        cout << elmnt << endl;
    }

    return 0;
}
