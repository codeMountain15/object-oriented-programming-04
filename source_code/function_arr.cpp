// function_arr.cpp
//

#include <iostream>
#include <string>

using namespace std;

void array_function(string my_trips[3]) {

        cout << my_trips[0] << "\n";
        cout << my_trips[1] << "\n";
        cout << my_trips[2] << "\n";

}

int main() {
    string trips_2022[3] = { "Patra", "Psara", "Naxos"};

    array_function(trips_2022);

    return 0;
}
