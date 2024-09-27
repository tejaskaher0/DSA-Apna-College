#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vect(3, 2);

    cout << vect[0] << endl;
    cout << vect[1] << endl;
    cout << vect[2] << endl;
    
    return 0;
}