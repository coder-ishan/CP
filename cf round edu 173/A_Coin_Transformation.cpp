#include "bits/stdc++.h"

using namespace std;
#define lli long long int
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
void solve(){
    lli n;
    cin >> n;
    lli res=0;
    while(n>0){
        n/=4;
        res++;
    }
    cout<<binpow(2,res-1)<<endl;

}

    

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

