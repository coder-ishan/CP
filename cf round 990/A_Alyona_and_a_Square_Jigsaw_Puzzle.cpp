#include "bits/stdc++.h"

using namespace std;

bool isvalid(int x){
    int a = sqrt(x);
    if(a*a==x && a&1)return 1;
    return 0;
}

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int count=0;
    for(int i =0;i<n;i++){
        sum+=a[i];
        if(isvalid(sum)){
            count++;
        }
    }
    cout<<count<<endl;
}

    

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

