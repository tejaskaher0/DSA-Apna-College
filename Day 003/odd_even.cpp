#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(n%2 == 0){
        cout << "Even" << endl;
        cout << "Bye!" << endl;
    } else {
        cout << "Odd" << endl;
    }
    
    return 0;
}