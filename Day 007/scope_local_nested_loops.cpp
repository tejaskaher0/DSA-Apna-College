#include <iostream>
using namespace std;

int main() {

    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 10; j++) {
            cout << j << " ";
        }
        cout << endl;
        for(int j = 1; j < 3; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}