#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vect, int target) {
    int n = vect.size();
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(vect[i] + vect[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}

int main() {

    vector<int> vect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 9;

    vector<int> ans = pairSum(vect, target);
    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}