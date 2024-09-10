#include <iostream>
using namespace std;

int main() {
    
    for(int i=1; i<=5; i++) {   // Lines
        int m = 10;
        for(int j=1; j<=m; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}