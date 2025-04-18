// https://codeforces.com/contest/2093/problem/C

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Check if a number is prime (only works for numbers that fit in long long)
bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;

        string y_str = "";
        for (int i = 0; i < k; i++) {
            y_str += x; // repeat x k times
        }

        // If the number is too big to fit in long long
        if (y_str.size() > 18) {
            cout << "NO\n"; // too big to check
            continue;
        }

        long long y = stoll(y_str); // safe now
        if (isPrime(y))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
