#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vect = {'a', 'b', 'c', 'd'};

    cout << "Size of given vector: " << vect.size() << endl;

    vect.push_back('e');
    vect.push_back('f');

    for(char val : vect) {
        cout << val << " ";
    }

    cout << endl << "Size of given vector after Pushback: " << vect.size() << endl;

    vect.pop_back();
    vect.pop_back();

    cout << "Size of given vector after Popback: " << vect.size() << endl;
    return 0;
}