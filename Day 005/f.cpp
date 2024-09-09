#include <iostream>
using namespace std;

int fun() {
    return 2;
    cout << "Hello\n";  // Not write the statements after return
}

int main() {
    
    cout << fun() << endl;
    
    return 0;
}