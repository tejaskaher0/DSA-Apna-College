#include <iostream>
using namespace std;

// Sum of 2 numbers
int sum(int a, int b) {
    int s = a + b;
    return s;       // return (a + b);
}

// Minimum of 2 numbers
int minOfTwo(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    
    cout << "Sum = " << sum(10, 73) << endl;
    cout << "Mininum between two numbers = " << minOfTwo(10, 73) << endl;

    return 0;
}