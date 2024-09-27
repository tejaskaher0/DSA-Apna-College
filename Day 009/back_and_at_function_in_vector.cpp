#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vect = {'a', 'b', 'c', 'd'};

    cout << "Last Element of Vector: " << vect.back() << endl;
    cout << "Element of Vector at Index 3: " << vect.at(3) << endl;

    return 0;
}