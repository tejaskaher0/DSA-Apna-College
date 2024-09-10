#include <iostream>
using namespace std;

void fun() {
    int x = 25;

    cout << "x = " << x << endl;
}

int main() {
    fun();

    // cout << x << endl;  // Can't Call x Variable here cause it is declared in fun() function
    return 0;
}