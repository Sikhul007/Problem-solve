// https://codeforces.com/contest/1530/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;

        char maxDigit = '0';
        for (char c : n) {
            if (c > maxDigit) {
                maxDigit = c;
            }
        }

        cout << (maxDigit - '0') << endl;
    }

    return 0;
}
