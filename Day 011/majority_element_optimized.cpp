#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majorityElement(vector<int> vect) {
    int n = vect.size();

    // Sort
    sort(vect.begin(), vect.end());

    // Frequency Count
    int freq = 1, ans = vect[0];
    for(int i = 1; i < n; i++) {
        if(vect[i] == vect[i-1]) {
            freq++;
        } else {
            freq = 1;
            ans = vect[i];
        }

        if(freq > n/2) {
            return ans;
        }
    }

    return ans;
}

int main() {

    vector<int> vect = {1, 2, 1, 2, 1};

    cout << majorityElement(vect) << endl;

    return 0;
}