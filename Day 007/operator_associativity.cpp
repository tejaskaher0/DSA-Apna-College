#include <iostream>
using namespace std;

int main() {
    
    cout << (5 * 3 % 2) << endl;    // (15 % 2) = 1 [Associativity always go from Left To Right]
    return 0;                       // [Note: Associativity rule for ! ++ -- = is Right To Left]
}