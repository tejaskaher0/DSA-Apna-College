#include <iostream>
using namespace std;

int main() {
    int marks[5] = {99, 100, 54, 82, 93};
    int size = 5;

    // int sz = sizeof(marks);
    // cout << sz << endl;

    size = sizeof(marks) / sizeof(int);
    cout << sizeof(marks) / sizeof(int) << endl;
    cout << size << endl;

    // loops : 0 to size-1

    return 0;
}