#include <iostream>
using namespace std;

int main() {
    int n = 10, sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
        if(i == 5) {            // 1 + 2 + 3 + 4 + 5 -> 15
            break;              // keyword
        }
    }

    cout << "Sum = " << sum << endl;
    return 0;
}