// Write a function to print all prime numbers from 2 to N.

#include <iostream>
using namespace std;

void checkPrime(int num) {
    bool isPrime = true;

    if (num <= 1) {
        // Numbers less than or equal to 1 are not prime
        return;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime) {
        cout << num << " ";
    }
}

void printPrime(int nn) {
    for (int i = 2; i <= nn; i++) {
        checkPrime(i);
    }
    cout << endl;
}

int main() {
    int n = 20;
    printPrime(n);
    return 0;
}


// #include <iostream>
// using namespace std;

// void checkPrime(int num) {
//     bool isPrime = true;

//     if(num <= 2 && num > 0) {
//         cout << "Number is prime" << endl;
//         return;
//     } else if(num <= 0) {
//         cout << "Number is too small!" << endl;
//         return;
//     } 
//     for(int i = 2; i < num; i++) {
//         if(num%i == 0) {
//             isPrime = false;
//             break;
//         }
//     }
    
//     if(isPrime == true) {
//         cout << num << endl;
//     }

//     return;
// }

// char printPrime(int nn) {

//     for(int i = 2; i <= nn; i++) {
//         cout << checkPrime(i) << endl;
//     }

//     return;
// }

// int main() {
//     int n = 20;

//     printPrime(n);
//     return 0;
// }