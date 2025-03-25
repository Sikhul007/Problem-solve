// problem link: https://codeforces.com/contest/2091/problem/C

#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n % 2 == 0) {
            // If n is even, it's impossible to form the required permutation
            cout << "-1\n";
        } else {
            vector<int> perm(n);
            
            // We want to fill the permutation in a way that all cyclic shifts
            // have exactly one fixed point
            int mid = (n + 1) / 2;
            perm[0] = mid; // Place the middle element at the start
            
            int left = mid - 1;
            int right = mid + 1;
            
            for (int i = 1; i < n; i += 2) {
                if (right <= n) {
                    perm[i] = right++;
                }
                if (i + 1 < n && left >= 1) {
                    perm[i + 1] = left--;
                }
            }
            
            for (int num : perm) {
                cout << num << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
