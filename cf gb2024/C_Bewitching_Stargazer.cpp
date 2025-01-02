#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include "bits/stdc++.h"

using namespace std;
#define lli long long int 
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl



void solve() {
   int n,k;
   cin>>n>>k;
   queue<pair<int,int> >q;
   q.push(make_pair(1,n));
   lli pt=0;
   while(!q.empty()){
        auto it = q.front();
        q.pop();
        int l= it.first;
        int r= it.second;
        int s =r-l+1;
        if(s<k){
            continue;
        }
        int m = l+(r-l)/2;
        if(s%2==0){
            q.push(make_pair(l,m));
            q.push(make_pair(m+1,r));
        }
        else{
            pt+=m;
            q.push(make_pair(l,m-1));
            q.push(make_pair(m+1,r));
        }
   }
   cout<<pt<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}