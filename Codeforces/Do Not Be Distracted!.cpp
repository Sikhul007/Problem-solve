// problem Link: https://codeforces.com/contest/1520/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read number of days
        string s;
        cin >> s; // Read task order

        set<char> seen;  // Stores tasks that have been completed
        bool suspicious = false;

        for (int i = 0; i < n; i++) {
            if (seen.count(s[i]) && s[i] != s[i - 1]) {
                suspicious = true; // If a previous task appears again, it's suspicious
                break;
            }
            seen.insert(s[i]); // Mark task as completed
        }

        if (suspicious) 
            cout << "NO\n";
        else 
            cout << "YES\n";
    }

    return 0;
}
