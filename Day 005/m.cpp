// Write a function to print nth Fibonacci

#include <iostream>
using namespace std;

void printFibonacci(int num) {
    int i = 0, j = 1;
    int nextElement = 0;
    
    while(nextElement <= num) {
        nextElement = i + j;

        if(i == 0) {
            cout << i << " ";
        } else if(i == 1) {
            cout << i << " ";
        }

        i = j;
        j = nextElement;

        if(nextElement <= num) {
            cout << nextElement << " ";
        }

    }
    return;
}

int main() {
    int num = 20;
    printFibonacci(num);
    return 0;
}