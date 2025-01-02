#include "bits/stdc++.h"

using namespace std;
#define pii pair<int,int>
#define lli long long int
void solve(){

    //Inputs
    int n;
    cin >> n;
    vector<int>x;
    vector<int>y;
    for(int i =0;i<n;i++) {
        int u;
        cin>>u;
        x.push_back(u);
    }
    for(int i =0;i<n;i++) {
        int u;
        cin>>u;
        y.push_back(u);
    }

    //Solution
    lli sum=0;
    bool done= false;
    for(int i =0;i<n;i++){
       sum+=max(x[i],y[i]);
    }
    int mini= INT_MIN;
    for(int i =0;i<n;i++){
       mini= max(min(x[i],y[i]),mini);
    }
    
   cout<<sum+mini<<endl;
    
}

    

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

