#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#include <iostream>
#include "bits/stdc++.h"

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int> >a;
    vector<int>rank(n,0);
    
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(make_pair(x,i));
    }
    sort(a.rbegin(),a.rend());
    for(int i =0;i<n;i++){
        rank[a[i].second] = i;
    }
    int ct=0;
    for(int i =1;i<n;i++){
        if(rank[i]==rank[i-1]+1||rank[i]==rank[i-1]-1)ct++;
    }
    cout<<n-ct<<endl;

    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

