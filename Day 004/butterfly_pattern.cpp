// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     // Top
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i+1; j++) {
//             cout << "*";
//         }

//         for(int j = 0; j < 2*(n-i-1); j++) {
//             cout << " ";
//         }
        
//         for(int j = 0; j < i+1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Bottom
//     for(int i = 0; i < n; i++) {
        
//         for(int j = 0; j < n-i; j++){
//             cout << "*";
//         }

//         for(int j = 0; j < 2*i; j++) {
//             cout << " ";
//         }

//         for(int j = 0; j < n-i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Top half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}