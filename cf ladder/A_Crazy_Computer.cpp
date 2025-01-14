#include "bits/stdc++.h"

using namespace std;

void solve(){
   int n,c;
   cin>>n>>c;
   int ct =1;
   int res=0;
   int a[n];
   for(int i =0;i<n;i++){
        cin>>a[i];
   }
   for(int i =1;i<n;i++){
    
    if(a[i]-a[i-1]<=c){
        ct++;
    }
    else{ct=1;}

     res= max(res,ct);
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

