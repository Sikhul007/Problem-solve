// https://codeforces.com/contest/2093/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<ll, ll> getCoord(ll n, ll d) {
    ll x = 1, y = 1;
    ll size = 1LL << n;
    ll cur = 0;
    while (n > 0) {
        size >>= 1;
        ll block = size * size;
        if (d <= cur + block) {
            // Top-left
        } else if (d <= cur + 2 * block) {
            // Bottom-right
            d -= block;
            x += size;
            y += size;
        } else if (d <= cur + 3 * block) {
            // Bottom-left
            d -= 2 * block;
            x += size;
        } else {
            // Top-right
            d -= 3 * block;
            y += size;
        }
        cur = 0;
        n--;
    }
    // 2x2 matrix base case:
    // Fill order is: (1,1)->1, (1,2)->4, (2,1)->3, (2,2)->2
    int order[] = {1, 4, 3, 2};
    for (int i = 0; i < 4; ++i) {
        int dx = (i / 2), dy = (i % 2);
        if (order[i] == d)
            return {x + dx, y + dy};
    }
    return {x, y}; // fallback
}

ll getValue(ll n, ll x, ll y) {
    ll res = 0;
    ll size = 1LL << n;
    while (n > 0) {
        size >>= 1;
        ll block = size * size;
        if (x <= size && y <= size) {
            // Top-left: nothing to add
        } else if (x > size && y > size) {
            // Bottom-right
            res += block;
            x -= size;
            y -= size;
        } else if (x > size) {
            // Bottom-left
            res += 2 * block;
            x -= size;
        } else {
            // Top-right
            res += 3 * block;
            y -= size;
        }
        n--;
    }
    // Base case 2x2: 1, 4, 3, 2
    if (x == 1 && y == 1) res += 1;
    else if (x == 2 && y == 2) res += 2;
    else if (x == 2 && y == 1) res += 3;
    else if (x == 1 && y == 2) res += 4;
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        while (q--) {
            string type;
            cin >> type;
            if (type == "->") {
                ll x, y;
                cin >> x >> y;
                cout << getValue(n, x, y) << '\n';
            } else if (type == "<-") {
                ll d;
                cin >> d;
                auto [x, y] = getCoord(n, d);
                cout << x << ' ' << y << '\n';
            }
        }
    }
    return 0;
}
