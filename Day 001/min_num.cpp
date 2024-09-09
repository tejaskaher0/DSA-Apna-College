#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    if(a>b){
        cout << "second number is smaller" << endl;
    } else {
        cout << "first number is smaller" << endl;
    }
    
    return 0;
}