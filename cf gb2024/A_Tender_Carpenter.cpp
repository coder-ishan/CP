#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include "bits/stdc++.h"

using namespace std;

#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl


bool isTriangle(int a,int b,int c){
    if(a+b>c&&b+c>a&&c+a>b)return true;
    return false;
}
void solve() {
    int n;
    cin>>n;
    int a[n];
    bool y=0;
    for(int i  =0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(isTriangle(a[i],a[i+1],a[i+1])&&isTriangle(a[i],a[i],a[i+1])){
            y=1;
            break;
        }
    }
    if(y)cyes;
    else cno;

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