#include <iostream>
using namespace std;

// Local Scope is occured only when you use the variables in if-else, functions, loops,
// and in block of code

void fun() {
    int z = 20;
}

int main() {

    {
        int x = 10;
    }

    if(3 > 1) {
        int a = 3;
    }

    fun();

    for(int i = 0; i < 10; i++){
        continue;
    }

    // cout << x << endl;  // Can't accessible
    // cout << a << endl;  // Can't accessible
    // cout << z << endl;  // Can't accessible
    // cout << i << endl;  // Can't accessible
    
    return 0;
}