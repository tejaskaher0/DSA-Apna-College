#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
    cout << "In function\n";
    for(int i = 0; i < size; i++) {
        arr[i] = 2 * arr[i];
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3};

    changeArr(arr, sizeof(arr)/sizeof(int));

    cout << "In main\n";
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}