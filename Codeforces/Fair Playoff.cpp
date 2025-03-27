// problem link: https://codeforces.com/contest/1535/problem/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s[4];
        cin >> s[0] >> s[1] >> s[2] >> s[3];

        // Find the winners of the two initial matches
        int finalist1 = max(s[0], s[1]); // Winner of first match
        int finalist2 = max(s[2], s[3]); // Winner of second match

        // Sort to find the two highest skilled players
        sort(s, s + 4);
        int highest1 = s[3], highest2 = s[2]; // Top two skilled players

        // Check if the finalists are the top two skilled players
        if ((finalist1 == highest1 && finalist2 == highest2) ||
            (finalist1 == highest2 && finalist2 == highest1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
