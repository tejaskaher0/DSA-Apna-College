#include<iostream>
using namespace std;

int main() {

    float num1, num2;
    char opera;

    cout << "************ Welcome To Calculator ************" << endl;
    cout << "Enter 1st Number : ";
    cin >> num1;
    cout << "Enter 2nd Number : ";
    cin >> num2;
    cout << "Enter The Operation You Want to Perform (+, -, *, /, %) : ";
    cin >> opera;
	
    if (opera == '+') {
        cout << "Sum = " << num1 + num2 << endl;
    } else if (opera == '-') {
        cout << "Substraction = " << num1 - num2 << endl;
    } else if (opera == '*') {
        cout << "Multiplication = " << num1 * num2 << endl;
    } else if (opera == '/') {
        cout << "Division = " << num1 / num2 << endl;
    } else if (opera == '%') {
        cout << "Modulo (Remainder) = " << ((int)(num1) % (int)(num2)) << endl;
    } else {
        cout << "Invalid Operator" << endl;
    }

    cout << "******** Thank you for using calculator ********" << endl;

    return 0;
}