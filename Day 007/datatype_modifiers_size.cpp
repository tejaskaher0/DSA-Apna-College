#include <iostream>
using namespace std;

int main() {
    
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;

    unsigned int x = -10;       // Use unsigned only for positive input or it will write garbage value

    cout << x << endl;

    return 0;
}