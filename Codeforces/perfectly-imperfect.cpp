#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x) {
    int root = sqrt(x);
    return root * root == x;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        vector<int> a(n);
        bool found = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (!isPerfectSquare(a[i])) {  
                found = true;
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
