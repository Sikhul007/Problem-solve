// Problem link: codeforces.com/contest/1515/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x; // Number of gold pieces and dangerous weight

        vector<int> w(n);
        int sum = 0;

        // Read the weights and calculate the total sum
        for (int i = 0; i < n; i++) {
            cin >> w[i];
            sum += w[i];
        }

        // If the total weight is exactly x, it's impossible
        if (sum == x) {
            cout << "NO\n";
            continue;
        }

        // Sort the weights to ensure safe placement
        sort(w.begin(), w.end());

        cout << "YES\n";

        int runningSum = 0;
        for (int i = 0; i < n; i++) {
            runningSum += w[i];

            // If the running sum becomes x, swap with the next element
            if (runningSum == x) {
                swap(w[i], w[i + 1]);
                break;
            }
        }

        // Print the valid sequence
        for (int i = 0; i < n; i++) {
            cout << w[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
