#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 7;           // 3 = 011 & 7 = 111

    cout << (a & b) << endl;    // Bitwise AND Operator
    cout << (a | b) << endl;    // Bitwise OR Operator
    cout << (a ^ b) << endl;    // Bitwise XOR Operator [Exclusive OR]

    return 0;
}