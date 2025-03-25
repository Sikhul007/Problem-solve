// problem link: https://codeforces.com/contest/1527/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = 0;
        while ((1 << m) <= n) {
            m++;
        }
        m--;
        int k = (1 << m) - 1;
        cout << k << endl;
    }
    return 0;
}