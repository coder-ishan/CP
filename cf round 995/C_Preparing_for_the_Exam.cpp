#include "bits/stdc++.h"

using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m);
    vector<int>q(k);
    for(int i=0;i<m;i++){
        cin>>a[i];
        a[i]-=1;
    }
    vector<int>knows(n,0);
    for(int i=0;i<k;i++){
        cin>>q[i];
        
        knows[q[i]-1]++;
        q[i]-=1;
    }
    
    if(k==n){
        for(int i=0;i<m;i++){
            cout<<1;
        }
        cout<<endl;
    }
    
    else if(k==n-1){
        for(int i=0;i<m;i++){
            if(!knows[a[i]])cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    else{
         for(int i=0;i<m;i++){
            cout<<0;
        }
        cout<<endl;
    }
}

    

int main(){
     int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

