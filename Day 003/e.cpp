#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter the character : ";
    cin >> ch;

    if (ch >= 'a' && ch <='z'){         // if (ch >= 97 && ch <= 120)
        cout << "Lowercase" << endl;
    } else {
        cout << "Uppercase" << endl;
    }

    return 0;
}