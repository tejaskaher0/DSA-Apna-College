#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {       // Outer Loop for Number of Lines
        for(int j = 1; j <= n; j++) {   // Inner Loop for Number of Rows
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}