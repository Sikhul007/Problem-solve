// problem link: https://codeforces.com/contest/2091/problem/A

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> digits(n);
        for (int i = 0; i < n; ++i) {
            cin >> digits[i];
        }
        
        // Target sequence "01032025"
        vector<int> target = {0, 1, 0, 3, 2, 0, 2, 5};
        int target_index = 0;
        
        // Try to match the digits to the target sequence
        for (int i = 0; i < n; ++i) {
            if (digits[i] == target[target_index]) {
                target_index++;
            }
            if (target_index == target.size()) {
                cout << (i + 1) << endl; // We need to print the number of digits used (1-based index)
                break;
            }
        }
        
        // If we couldn't match all digits
        if (target_index != target.size()) {
            cout << "0" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}

