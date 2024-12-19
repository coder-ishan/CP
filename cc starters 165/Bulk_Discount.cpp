#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#include "bits/stdc++.h"
using namespace std;

void solve() {
   
   int n;
   cin>>n;
   int a[n];
   int sum =0;
   for(int i =0;i<n;i++){
       cin>>a[i];
   }
   sort(a,a+n);
   for(int i=0;i<n;i++){
       sum+=max(a[i]-i,0);
   }
   cout<<sum<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}