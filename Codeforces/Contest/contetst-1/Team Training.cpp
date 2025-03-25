// problem link: https://codeforces.com/contest/2091/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend()); // Sort in descending order

    int count = 0, team_size = 0;

    for (int skill : a) {
        team_size++; // Add current student to the team

        if (team_size * skill >= x) {
            count++;      // Team is valid, increment count
            team_size = 0; // Reset team size
        }
    }

    cout << count << '\n'; // Print max number of strong teams
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
