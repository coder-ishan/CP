#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#include "bits/stdc++.h"
using namespace std;

#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl

void print(auto u){
    cout<<u<<"\n";
}

void solve() {
   long long int n;
   cin>>n;
   print(1+(n-1)*(n-2));
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}