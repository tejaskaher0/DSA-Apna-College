// WAF to print all the unique values in an array.

#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
    cout << "Unique elements in the array are: ";
    
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Check if the element has appeared before in the array
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        // If the element is unique, print it
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 2, 1, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, size);

    return 0;
}