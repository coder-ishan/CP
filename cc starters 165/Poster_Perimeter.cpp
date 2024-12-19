#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#include "bits/stdc++.h"
using namespace std;

void solve() {
   int n,m,k;
   cin>>n>>m>>k;
   if(2*(n+m)>=k){
       if(k%2==0 && k>4)cout<<"0"<<endl;
       else{
           int a = k%2;
           if(k<=2)cout<<4-k<<endl;
           else{
               cout<<a<<endl;
           }
       }
   }
   else{
       cout<<k-2*(n+m)<<endl;
   }
}
 
int main() {
    ios_base::sync_with_stdio(false); 
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}