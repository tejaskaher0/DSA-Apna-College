#include <iostream>
using namespace std;

int main() {
    int nums[] = {5, 23, 45, 28, 91, -19, -92};
    int size = sizeof(nums) / sizeof(int);

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }

        // smallest = max(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    
    return 0;
}