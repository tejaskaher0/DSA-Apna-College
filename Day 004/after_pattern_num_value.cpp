#include <iostream>
using namespace std;

int main() {
    int n = 3, num = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    cout << "After Pattern Value Of num = " << num << endl;
    
    return 0;
}