#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> vect) {
    int n = vect.size();

    for(int val : vect) {
        int freq = 0;

        for(int ele : vect) {
            if(ele == val) {
                freq++;
            }
        }

        if(freq > n/2) {
            return val;
        }

    }

    return -1;
}

int main() {

    vector<int> vect = {1, 1, 2, 2, 2, 2, 4, 2, 4};

    cout << majorityElement(vect) << endl;

    return 0;
}