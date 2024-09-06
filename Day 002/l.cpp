#include <iostream>
using namespace std;

int main(){
    int a = 7, b;

    b = a++; // kaam; update
    cout << "b = " << b << endl; // 7
    cout << "a = " << a << endl; // 8

    int c = 7, d;

    d = ++c; // update; kaam
    cout << "d = " << d << endl; // 8
    cout << "c = " << c << endl; // 8
    
    int f = 9, z;

    z = f--; // kaam; update
    cout << "z = " << z << endl; // 9
    cout << "f = " << f << endl; // 8

    int n = 9, g;

    g = --n; // update; kaam
    cout << "g = " << g << endl; // 8
    cout << "n = " << n << endl; // 8
    
    return 0;
}