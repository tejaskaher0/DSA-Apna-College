#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 2;
    
    cout << (a << b) << endl;   // Bitwise Left Shift Operator      ans = a * 2 raise to b
    cout << (a >> b) << endl;   // Bitwise Right Shift Operator     ans = a / 2 raise to b
    return 0;
}