// problem Link: https://codeforces.com/contest/1526/problem/A

#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;

int main() {
    faster;
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        n *= 2; // Since n represents half the total numbers

        vector<int> ar(n);
        for (int &x : ar) cin >> x;

        sort(ar.begin(), ar.end());

        int i = 0, j = n - 1;
        while (i <= j) {
            cout << ar[j--] << " ";  // Print largest element
            if (i <= j) cout << ar[i++] << " ";  // Print smallest element
        }
        cout << '\n';
    }

    return 0;
}
