#include <iostream>
using namespace std;

int main() {
    int n = 5, fact = 1;

    for(int i=1; i<=n; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact << endl;
    
    return 0;
}