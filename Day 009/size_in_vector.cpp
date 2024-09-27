#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vect = {'a', 'b', 'c', 'd'};

    cout << "Size of given vector: " << vect.size() << endl;

    for(char val : vect) {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}