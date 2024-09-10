#include <iostream>
using namespace std;

int main() {
    int n = 50, sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nSum of Odd Numbers = " << sum << endl;
    return 0;
}