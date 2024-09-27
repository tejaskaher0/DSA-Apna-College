#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vect = {'a', 'b', 'c', 'd', 'e'};

    for(char i : vect) {
        cout << i << endl;
    }
    
    return 0;
}