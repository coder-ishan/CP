#include <iostream>
#include "bits/stdc++.h"

using namespace std;
#define lli long long int 


void solve(){
  int n;
  cin>>n;
  int u =1;
  int cnt=1;
  while(u<n){
    u=u*2+2;
    cnt++;
  }
  cout<<cnt<<endl;
  

}



int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

