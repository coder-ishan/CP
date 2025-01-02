#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include "bits/stdc++.h"

using namespace std;

#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl


void solve() {
    int h,l,w;
    cin>>h>>l>>w;
    int a = 2*(h*l+l*w+h*w);
    
    int ans = 1000/a;
    cout<<ans<<endl;
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}