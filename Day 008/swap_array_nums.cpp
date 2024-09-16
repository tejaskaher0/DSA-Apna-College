#include <iostream>
using namespace std;

int reverseArr(int arr[], int size) {
    int start = 0, end = size - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    return arr[size];
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;

    reverseArr(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}