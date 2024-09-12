#include <iostream>
using namespace std;

bool isPowerOf2(int x) {
    // Check if x is greater than 0 and if x & (x - 1) equals 0
    return (x > 0) && ((x & (x - 1)) == 0);
}

int main() {
    int x = 64;

    if (isPowerOf2(x)) {
        cout << x << " is a power of 2" << endl;
    } else {
        cout << x << " is not a power of 2" << endl;
    }

    return 0;
}