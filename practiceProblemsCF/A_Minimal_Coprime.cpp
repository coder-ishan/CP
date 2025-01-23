#include "bits/stdc++.h"

using namespace std;

#define lli long long int
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl


void solve(){
   int a,b;
   cin>>a>>b;
   if(a==1 &&b==1){
    cout<<1<<endl;
    return;
   }
   cout<<abs(b-a)<<endl;

}

    

int main(){
    int t;
   cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

