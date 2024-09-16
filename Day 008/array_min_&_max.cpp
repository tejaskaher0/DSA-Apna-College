// WAF to swap the max & min number of an array.

#include <iostream>
using namespace std;

int main() {
    int nums[] = {5, 23, 45, 28, 91, -19, -92};
    int size = sizeof(nums) / sizeof(int);

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(nums[i] < mini) {
            mini = nums[i];
        }

        // min = max(nums[i], min);
        maxi = max(nums[i], maxi);
    }

    cout << "min: " << mini << endl;
    cout << "max: " << maxi << endl;
    
    return 0;
}