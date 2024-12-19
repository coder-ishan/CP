#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#include "bits/stdc++.h"

using namespace std;

#define ll long long int
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl

//GOAT PROBLEM

// travel till. all or. some distances are equal thenn alternate
void solve() {
    ll x1, y1, z1, x2, y2, z2, k;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> k;
    ll x = abs(x1 - x2);
    ll y = abs(y1 - y2);
    ll z = abs(z1 - z2);
    vector < ll > arr = {
        x,
        y,
        z
    };
    sort(arr.begin(), arr.end());

    ll a = arr[2], b = arr[0] + arr[1];

    if (a <= (b + 1) * k) cout << a + b << endl;

    else {
        ll extra_moves = 2 * ((a - (b + 1) * k + 2 * k - 1) / (2 * k));
        cout << a + b + extra_moves << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}