#include <iostream>
using namespace std;

void changeX(int x) {
    x = 2*x;
    cout << "x = " << x << endl;
}

int main() {
    int x = 5;
    changeX(x);
    
    cout << "main() x = " << x << endl;
    return 0;
}