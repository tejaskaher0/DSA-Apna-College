// #include <iostream>
// using namespace std;

// int powerOf2(int x) {
//     int a = x;

//     while(x) {
//         if(x == 2) {
//             cout << a << " is power of 2" << endl;
//             return 0;
//         } else {
//             x /= 2;
//         }
//     }

//     cout << a << " is not power of 2" << endl;
//     return 0;
// }

// int main() {
//     int x = 63;
    
//     cout << powerOf2(x) << endl;
    
//     return 0;
// }


#include <iostream>
using namespace std;

bool isPowerOf2(int n) {
    // A number less than or equal to 0 cannot be a power of 2
    if (n <= 0) {
        return false;
    }

    // Keep dividing the number by 2 until it becomes 1
    while (n > 1) {
        if (n % 2 != 0) { // If n is not divisible by 2, it is not a power of 2
            return false;
        }
        n /= 2; // Divide n by 2
    }

    // If we reach here, n must be 1, meaning it is a power of 2
    return true;
}

int main() {
    int n = 64; // Example input

    if (isPowerOf2(n)) {
        cout << n << " is a power of 2" << endl;
    } else {
        cout << n << " is not a power of 2" << endl;
    }

    return 0;
}