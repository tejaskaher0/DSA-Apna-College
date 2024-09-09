#include <iostream>
using namespace std;

int sum(int a, int b) {
    a = a + 10; // 15
    b = b + 10; // 14
    return a+b; //29
}

int main() {
    int a = 5, b = 4;
    cout << sum(a, b) << endl;

    cout << a << endl;  // Value of a & b is same cause it is only changed in sum() function
    cout << b << endl;

    return 0;
}