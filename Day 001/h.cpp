// Calculate Max of 2 numbers.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    if(num1 == num2) {
        cout << "Both numbers are same" << endl;
        return 0;
    }

    if(num1 > num2) {
        cout << "First number is greater" << endl;
    } else {
        cout << "Second number is greater" << endl;
    }
    
    return 0;
}