#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majorityElement(vector<int> vect) {
    int n = vect.size();
    int freq = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = vect[i];
        }

        if(ans == vect[i]) {
            freq++;
        } else {
            freq--;
        }

    }

    return ans;
}

int main() {

    vector<int> vect = {1, 2, 1, 2, 1, 2, 2, 1};

    cout << majorityElement(vect) << endl;

    return 0;
}