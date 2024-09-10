#include <iostream>
using namespace std;

int main() {
    int n = 7;

    for(int i = 0; i < n; i++) {

        // Spaces
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }

        // Half-Pyramid Numbers
        for(int j = 1; j <= i+1; j++) {
            cout << j;
        }

        // Second Half-Pyramid Numbers
        for(int j = i; j > 0; j--) {
            cout << j;
        }
        
        cout << endl;
    }

    return 0;
}