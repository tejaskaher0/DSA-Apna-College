#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            cout << "Element Found" << endl;
            return arr[i];
        }
    }

    cout << "Element Not Found" << endl;
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(int);
    int target = 190;
    
    cout << linearSearch(arr, size, target) << endl;

    return 0;
}