#include <iostream>
using namespace std;

int main() {
    int a = 2;
    char ch = 'A';
    float PI = 3.14;
    bool isSafe = true;
    double num = 827.829;

    cout << "Size of int : " << sizeof(a) << endl; // 4 Bytes
    cout << "Size of char : " << sizeof(ch) << endl; // 1
    cout << "Size of float : " << sizeof(PI) << endl; // 4
    cout << "Size of bool : " << sizeof(isSafe) << endl; // 1
    cout << "Size of double : " << sizeof(num) << endl; // 8

    return 0;
}