// https://codeforces.com/contest/2093/problem/B

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int len = n.size();
        int last_non_zero = -1;
        // Find the position of the rightmost non-zero digit
        for (int i = 0; i < len; ++i) {
            if (n[i] != '0') {
                last_non_zero = i;
            }
        }
        // Count the number of zeros before the rightmost non-zero digit
        int zeros_before = 0;
        for (int i = 0; i < last_non_zero; ++i) {
            if (n[i] == '0') {
                zeros_before++;
            }
        }
        // The longest subsequence with cost 1 is zeros_before + 1 (the non-zero digit)
        int max_len = zeros_before + 1;
        // Digits to remove is total digits minus the length of this subsequence
        int min_remove = len - max_len;
        cout << min_remove << endl;
    }
    return 0;
}