// Calculate Factorial of a number N.
// N! = 1 * 2 * 3 * .... * N

#include <iostream>
using namespace std;

int main() {
    int num, fact = 1, count = 1;

    cout << "Enter the number : ";
    cin >> num;
    
    while(count <= num) {
        fact *= count;
        count++;
    }

    cout << "Factorial : " << fact;

    return 0;
}