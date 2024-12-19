#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#include "bits/stdc++.h"

using namespace std;

void solve() {
   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
       
    }
    int ans =0;
    int curr=0;
    int currmax = a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]<currmax){
            curr++;
        }
        else{
            currmax= a[i];
            
            curr=0;
        }
        ans = max(ans,curr);
    }
    cout<<ans<<endl;
   
    
    
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