#include "bits/stdc++.h"

using namespace std;

#define lli long long int
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl


void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    vector<lli>prefix(n);
    prefix[0]=a[0];
    for(int i =1;i<n;i++){
        prefix[i]= prefix[i-1]+a[i];
    }
    if(prefix[n-1]%3!=0 && prefix[n-1]!=0){
        cout<<"0";
        return;
    }
    lli u= prefix[n-1]/3;
    lli v= 2*u;
    int uidx =0;
    int vidx=0;
    lli res=0;
    for(int i =0;i<n;i++){
        
        if(prefix[i]==u){
            uidx++;
        }
        else if(prefix[i]==v){
            res+=uidx;
            vidx++;
        }
    }

    if(u==v){
        res= (uidx-1);
        res*=(uidx-2);
        res/=2;
    }
    cout<<res<<endl;




}

    

int main(){
    int t;
   t=1;
    while(t--){
        solve();
    }
    return 0;
}

