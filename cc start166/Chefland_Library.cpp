#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include "bits/stdc++.h"

using namespace std;

#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl


void solve() {
    int n;
    cin>>n;
    vector<int>a;
    vector<int>res(1e5+1,0);
    a.push_back(0);
    for(int i =1;i<=n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        res[a[i]]= max(i,res[a[i]]);
    }
    long long ans=0;
    for(int i =1;i<=1e5;i++){
        ans+=res[i];
    }
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