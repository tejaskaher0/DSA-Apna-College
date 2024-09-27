#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vect = {1, 2, 1, 4, 2, 3, 4};

    int ans = 0;
    for(int val : vect) {
        ans ^= val;
    }

    cout << "Single Number in Vector: " << ans << endl;
    return 0;
}