// https://codeforces.com/contest/1251/problem/A

#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        set<char> working;
        int n = s.length();
        int i = 0;

        while (i < n) {
            char current = s[i];
            int count = 0;
            while (i < n && s[i] == current) {
                count++;
                i++;
            }
            if (count % 2 == 1) {
                working.insert(current);
            }
        }

        for (char c = 'a'; c <= 'z'; c++) {
            if (working.count(c)) {
                cout << c;
            }
        }
        cout << '\n';
    }

    return 0;
}