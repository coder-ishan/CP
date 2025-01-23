#include "bits/stdc++.h"

using namespace std;

#define lli long long int
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl


void solve(){
   int n,l,r;
   cin>>n>>l>>r;
   vector<int>a(n);
   for(int i =0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
   }
   sort(a.begin(),a.end());
   lli ans = 0;
   for(int i =0;i<=abs(r-l);i++){
        ans+=a[i];
   }

   cout<<ans<<endl;

}

    

int main(){
    int t;
   cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

