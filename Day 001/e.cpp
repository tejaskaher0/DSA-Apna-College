#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, count = 1;

    cout << "Enter the number : ";
    cin >> num;

    while(count <= num) {
        sum += count;
        count++;
    }

    cout << "Sum of 1 to " << num << " is : " << sum << endl;

    return 0;
}