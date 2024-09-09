// Binary to Decimal

#include <iostream>
using namespace std;

int binToDecimal(int binNum) {
    int ans = 0, pow = 1;

    while (binNum > 0) {
        int rem = binNum % 10;
        binNum /= 10;

        ans += (rem * pow);
        pow *= 2;
    }
    
    return ans;
}

int main() {

    cout << binToDecimal(101010) << endl;
    
    return 0;
}