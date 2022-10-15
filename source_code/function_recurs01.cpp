// function_recurs01.cpp
//

#include <iostream>
using namespace std;

void int_row(int);

int main() {
    
    int num;

    cout << "Give an integer:\n";
    cin >> num;
    
    int_row(num);

    return 0;
}


void int_row(int t) {
    if (t > 0) {
        cout << t-- << endl;
        int_row(t);
    }
}
