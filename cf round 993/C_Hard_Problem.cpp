#include <iostream>
#include "bits/stdc++.h"

using namespace std;

void solve(){
  int m,a,b,c;
  cin>>m>>a>>b>>c;
  if(a<=m &&b<=m){
    if(c<=2*m-a-b)cout<<a+b+c<<endl;
    else cout<<2*m<<endl;
  }
  else if(a<=m &&b>m)cout<<min(a+c,m)+m<<endl;
  else if(b<=m &&a>m) cout<<min(b+c,m)+m<<endl;
  else cout<<2*m<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

