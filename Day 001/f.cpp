#include <iostream>
using namespace std;

int main() {
    int num, i=2;
    bool isPrime = true;

    cout << "Enter the number : ";
    cin >> num;

    if(num <= 1) {
        cout << "Number is Non-Prime";
        return 0;
    }

    while(i <= num/2) {
        if(num % i == 0) {
            cout << "Number is Non-Prime" << endl;
            isPrime = false;
            break;
        }
        i++;
    }

    if(isPrime){
        cout << "Number is Prime" << endl;
    }

    return 0;
}