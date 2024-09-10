// Write a function to check if a number is prime or not .

#include <iostream>
using namespace std;

int checkPrime(int num) {
    bool isPrime = true;

    if(num <= 2 && num > 0) {
        cout << "Number is prime" << endl;
        return 0;
    } else if(num <= 0) {
        cout << "Number is too small!" << endl;
        return 0;
    } 
    for(int i = 2; i < num; i++) {
        if(num%i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if(isPrime == true) {
        cout << "Number is prime" << endl;
    } else {
        cout << "Number is not prime" << endl;
    }

    return 0;
}

int main() {
    int n = 18;
    
    checkPrime(n);

    return 0;
}