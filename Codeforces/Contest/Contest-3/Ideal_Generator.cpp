// https://codeforces.com/contest/2093/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        if (k == 1) {
            cout << "YES\n";
        } else if (k % 2 == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}