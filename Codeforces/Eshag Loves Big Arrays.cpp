// probllem Link: https://codeforces.com/contest/1529/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);  // Correctly declaring the vector
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];  // Now a[i] is valid
        }

        int min_a = *min_element(a.begin(), a.end()); // Find minimum element
        int count = 0;
        
        for (int num : a) {  // Range-based loop now works
            if (num > min_a) {
                count++;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
