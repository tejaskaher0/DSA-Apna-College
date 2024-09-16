#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int size = 5;

    for(int i = 0; i < size; i++) {
        cin >> marks[i];
    }

    // loops : 0 to size-1
    for(int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }

    cout << endl;

    return 0;
}