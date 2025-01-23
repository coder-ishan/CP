#include "bits/stdc++.h"

using namespace std;

#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl

/// ADD to back of queue
///for no WA

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int time=0;
    int ct=0;
    for(int i =0;i<n;i++){
        if(time<=a[i]){
            ct++;
            time+=a[i];
        }
    }
    cout<<ct<<endl;

}

    

int main(){
    int t;
   t=1;
    while(t--){
        solve();
    }
    return 0;
}

