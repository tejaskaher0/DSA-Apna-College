#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums) {
    int currSum = 0, maxSum = INT_MIN;

    for(int val : nums) {
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "Max Subarray Sum By Kadane's Algorithm = " << maxSubArray(nums) << endl;

    return 0;
}