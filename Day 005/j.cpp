#include <iostream>
using namespace std;

int fact(int num) {
    int fact = 1;

    for(int i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r) {
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n-r);

    int ans = fact_n / (fact_r * fact_nmr);
    return ans;
}

int main() {
    
    cout << "nCr = " << nCr(6, 3) << endl;
    return 0;
}