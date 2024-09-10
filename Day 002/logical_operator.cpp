#include <iostream>
using namespace std;

int main() {
    int a = 72, b = 92;
    bool isSafe = true;

    // Logical Operators
    cout << ((a > b) || (a != b)) << endl; // 72 > 92 || 72 != 92 -> false || true -> 0 || 1 -> 1
    cout << ((a <= b) && (a%2 == 0)) << endl; // 72 <= 92 && 72%2 ==0 -> true && true -> 1 && 1 -> 1
    cout << !(isSafe) << endl; // Not Altered the values ie. true -> false -> 0

    return 0;
}