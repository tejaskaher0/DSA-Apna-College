// Functions

#include <iostream>
using namespace std;

void printHello() {
    cout << "Hello\n";
}

int printHelloNew() {
    cout << "Hello\n";
    return 3;
}

int main() {
    printHello();
    // printHello();
    // printHello();
    // printHello();
    // printHello();

    // Function call / invoke
    int val = printHelloNew();
    cout << "val = " << val << endl;

    // cout << "Hello\n";    
    return 0;
}