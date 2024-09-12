#include <iostream>
using namespace std;

int reverseInteger(int n) {
    int reversed = 0;
    
    // Loop to reverse the digits of the number
    while (n != 0) {
        int digit = n % 10;                 // Extract the last digit
        reversed = reversed * 10 + digit;   // Append the digit to the reversed number
        n /= 10;                            // Remove the last digit from n
    }

    return reversed;
}

int main() {
    int n = 12345;
    
    cout << "Reversed integer: " << reverseInteger(n) << endl;
    
    return 0;
}

// #include <iostream>
// using namespace std;

// int reverseNum(int n) {
//     int reverse = 0;

//     while(n != 0) {
//         int digit  = n % 10;
//         reverse = reverse * 10 + digit;
//         n /= 10;
//     }
//     return reverse;
// }

// int main() {
//     int n = 12345;

//     cout << "Reversed Number : " << reverseNum(n) << endl;
//     return 0;
// }