// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3;

//     for(int i = 0; i < n; i++) {

//         for(int j = 0; j < n-i-1; j++) {
//             cout << " ";
//         }
//         cout << "* ";

//         if(i != 0) {
//             for(int j = 0; j < ((2*i)-1); j++) {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for(int i = 0; i < n-1; i++) {
        
//         // Spaces
//         for(int j = 0; j < i+1; j++) {
//             cout << " ";
//         }

//         cout << "*";
        
//         if(i != n-2) {
//             // Spaces
//             for(int j = 0; j < 2*(n-i)-5; j++) {
//                 cout << " ";
//             }
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n = 3;

    // Upper half of the diamond
    for (int i = 0; i < n; i++) {
        // Printing leading spaces
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        // Printing first star
        cout << "*";

        // Printing spaces between stars
        if (i != 0) {
            for (int j = 0; j < (2*i-1); j++) {
                cout << " ";
            }
            // Printing second star
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n-2; i >= 0; i--) {
        // Printing leading spaces
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        // Printing first star
        cout << "*";

        // Printing spaces between stars
        if (i != 0) {
            for (int j = 0; j < (2*i-1); j++) {
                cout << " ";
            }
            // Printing second star
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
