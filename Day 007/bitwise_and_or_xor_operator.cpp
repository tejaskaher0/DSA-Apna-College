#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 8;           // 4 = 0100 & 8 = 1000

    cout << (a & b) << endl;    // Bitwise AND Operator
    cout << (a | b) << endl;    // Bitwise OR Operator
    cout << (a ^ b) << endl;    // Bitwise XOR Operator [Exclusive OR]

    return 0;
}