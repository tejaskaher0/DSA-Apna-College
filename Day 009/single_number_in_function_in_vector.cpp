#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &vect) {
    int ans = 0;
    for(int val : vect) {
        ans ^= val;
    }
    return ans;
}

int main() {
    vector<int> vect = {1, 2, 1, 4, 2, 3, 4};

    cout << singleNumber(vect) << endl;
    
    return 0;
}