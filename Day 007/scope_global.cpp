#include <iostream>
using namespace std;

int x = 10;                 // Global Variable can be accessible from anywhere in the code

int main() {
    
    cout << x << endl;

    {
        cout << 2 * x << endl;
    }

    return 0;
}