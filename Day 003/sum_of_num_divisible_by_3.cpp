#include <iostream>
using namespace std;

int main() {
    int n = 10, sum = 0;

    for(int i=1; i<=n; i++) {
        if(i%3 == 0){
            sum += i;
        }
    }

    cout << "Sum of numbers which are divisible by 3 = " << sum << endl;
    
    return 0;
}