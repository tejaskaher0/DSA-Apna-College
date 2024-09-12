#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 10;           // 6 = 0110 & 10 = 1010

    cout << (a & b) << endl;    // Bitwise AND Operator
    cout << (a | b) << endl;    // Bitwise OR Operator
    cout << (a ^ b) << endl;    // Bitwise XOR Operator [Exclusive OR]

    return 0;
}