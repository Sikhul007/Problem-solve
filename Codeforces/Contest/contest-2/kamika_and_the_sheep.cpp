// problem Link: https://codeforces.com/contest/2092/problem/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] == '1' && b[i] == '1') {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
