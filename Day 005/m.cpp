// Write a function to print nth Fibonacci

#include <iostream>
using namespace std;

void printFibonacci(int num) {
    int i = 0, j = 1;
    int nextElement = 0;
    
    while(nextElement <= num) {
        nextElement = i + j;

        if(i == 0) {
            cout << i << " ";
        } else if(i == 1) {
            cout << i << " ";
        }

        i = j;
        j = nextElement;

        if(nextElement <= num) {
            cout << nextElement << " ";
        }

    }
    return;
}

int main() {
    int num = 20;
    printFibonacci(num);
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm = 0;

//     cout << "Enter the number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Series: ";

//     for (int i = 1; i <= n; ++i) {
//         // Prints the first two terms.
//         if(i == 1) {
//             cout << t1 << " ";
//             continue;
//         }
//         if(i == 2) {
//             cout << t2 << " ";
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
        
//         cout << nextTerm << " ";
//     }
//     return 0;
// }