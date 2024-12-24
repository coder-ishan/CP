#include "bits/stdc++.h"

using namespace std;

void solve(){
    long long int n,a,b,c;
    cin >> n>>a>>b>>c;
    long long int u=a+b+c;
    long long int days=0;
    days+=3*int(n/u);
    long long int left = n%u;
    //cout<<left<<days<<endl;
    if(left>0){
        left-=a;
        days++;
        if(left>0){
            left-=b;
            days++;
            if(left>0){
                left-=c;
                days++;
            }
        }
    }
    cout<<days<<endl;
   
}

    

int main(){
     int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

