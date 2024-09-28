#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    vector<int> vect = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for(int st = 0; st < n; st++) {
        int currSum = 0;
        for(int end = st; end < n; end++) {
            currSum += vect[end];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "Max Subarray Sum = " << maxSum << endl;

    return 0;
}