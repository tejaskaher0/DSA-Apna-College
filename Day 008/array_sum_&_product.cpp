// WAF to calculate sum & product of all numbers in an array.

#include <iostream>
using namespace std;

int sumProduct(int arr[], int size) {
    int sum = 0, product = 1;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    
    sumProduct(arr, size);

    return 0;
}