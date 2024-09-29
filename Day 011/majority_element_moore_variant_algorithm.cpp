#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> vect) {
    int n = vect.size();
    int freq = 0, ans = 0;

    // First pass: Finding a candidate for the majority element
    for(int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = vect[i];
        }

        if(ans == vect[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    // Second pass: Verifying the candidate
    int count = 0;
    for(int val : vect) {
        if(val == ans) {
            count++;
        }
    }

    // Return the majority element if it exists, otherwise -1
    if(count > n / 2) {
        return ans;
    } else {
        return -1;
    }
}

int main() {
    vector<int> vect = {1, 2, 3, 2, 2};

    cout << majorityElement(vect) << endl;

    return 0;
}


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int majorityElement(vector<int> vect) {
//     int n = vect.size();
//     int freq = 0, ans = 0;

//     for(int i = 0; i < n; i++) {
//         if(freq == 0) {
//             ans = vect[i];
//         }

//         if(ans == vect[i]) {
//             freq++;
//         } else {
//             freq--;
//         }

//     }

//     int count = 0;
//     for(int val : vect) {
//         if(val == ans) {
//             count++;
//         }
//     }

//     if(count > n/2) {
//         return ans;
//     } else {
//         return -1;
//     }
    
//     return ans;
// }

// int main() {

//     vector<int> vect = {1, 2, 1, 2, 1, 2, 2, 1, 2};

//     cout << majorityElement(vect) << endl;

//     return 0;
// }