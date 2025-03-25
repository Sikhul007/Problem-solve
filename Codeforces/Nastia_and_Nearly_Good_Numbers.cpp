// problem link: https://codeforces.com/contest/1521/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A, B;
        cin >> A >> B;
        if (B == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            if (B == 2) {
                cout << A << " " << 3 * A << " " << 4 * A << endl;
            } else {
                cout << A << " " << A * (B - 1) << " " << A * B << endl;
            }
        }
    }
    return 0;
}