#include <iostream>
using namespace std;

int main() {
    int a = 72, b = 92;

    // Relational Operators
    cout << (a > b) << endl; // 72 > 92 -> false  -> 0
    cout << (a >= b) << endl; // 72 >= 92 -> false -> 0
    cout << (a < b) << endl; // 72 < 92 -> true -> 1
    cout << (a <= b) << endl; // 72 <= 92 -> true -> 1
    cout << (a == b) << endl; // 72 == 92 -> false -> 0
    cout << (a != b) << endl; // 72 != 92 -> true -> 1

    return 0;
}