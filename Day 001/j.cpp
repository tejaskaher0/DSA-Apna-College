// Given a person's age, find if they should get a driving license or not.

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age : ";
    cin >> age;

    if(age >= 18){
        cout << "You're eligible to get driving licence!" << endl;
    } else {
        cout << "You're not eligible to get driving licence!" << endl;
    }
    
    return 0;
}