#include <iostream>
#include "bits/stdc++.h"

using namespace std;
#define lli long long int 

void solve(){
  int n,k;
  cin>>n>>k;
  vector<int>a(n,-1);
  int u =1;
  for(int i=k-1;i<n;i+=k){
    a[i]=u;
    u++;
  }
  if(a[n-1]==0)
  {
    a[n-1]=u;
    u++;
  }
  for(int i=0;i<n;i++){
    if(a[i]==-1){
      cout<<u<<" ";
      u++;
    }
    else{
      cout<<a[i]<<" ";
    }

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

