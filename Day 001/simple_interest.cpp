// Calculate "Simple Interest" from Principal (P), Rate (R) & Time (T).
// SI = P * R * T

#include <iostream>
using namespace std;

int main() {
    int prin, rate, time; // Time should be in days

    cout << "Enter the principle amount: ";
    cin >> prin;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time which is required: ";
    cin >> time;

    float si = prin * rate * time;

    cout << "The calculated Simple Interest is: " << si;
    
    return 0;
}