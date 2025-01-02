#include "bits/stdc++.h"

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>l(n);
    vector<int>r(n);
    int res= -2;
    for(int i =0;i<n;i++){
        cin>>l[i]>>r[i];
    }
    int minl= l[0];
    int maxr = r[0];

    for(int i =0;i<n;i++){ 
        minl = min(l[i],minl);
        maxr = max(r[i],maxr);
    }
    for(int i =0;i<n;i++){ 
        if(l[i]<=minl && r[i]>=maxr){
            res=i;
        }
       
    }
   
    
    cout<<res+1<<endl;
}

    

int main(){
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}

