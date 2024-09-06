#include <iostream>
using namespace std;

int main() {
    int n = 13;
    bool isPrime = true;

    for(int i = 2; i <= n-1; i++) {     // for (int i = 2; i*i <= n; i++)
        if (n%i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Number is Prime" << endl;
    } else {
        cout << "Number is Non-Prime" << endl;
    }

    return 0;
}