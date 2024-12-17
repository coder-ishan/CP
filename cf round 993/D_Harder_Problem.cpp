#include <iostream>
#include "bits/stdc++.h"

using namespace std;

void solve(){
    int n;
    cin>>n;
    set<int>st;
    vector<int>a(n,0);
    vector<int>v(n,0);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){  
        if(st.find(a[i])==st.end()){
            st.insert(a[i]);
            v[i]=a[i];
        }
    }
    
    
    int u =1;
    int i=0;
    while(i<n){
        if(v[i]==0){
            while(st.find(u)!=st.end()){
                u++;
            }
            v[i]=u;
            st.insert(u);
            i++;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

