#include <iostream>
using namespace std;

int main() {
    int marks[5] = {99, 100, 64, 82, 30};
    int size = 5;

    // loops : 0 to size-1
    for(int i = 0; i <= size - 1; i++) {
        cout << marks[i] << " ";
    }

    cout << endl;

    return 0;
}