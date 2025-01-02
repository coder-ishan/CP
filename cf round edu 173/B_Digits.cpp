#include "bits/stdc++.h"
using namespace std;
#define lli long long int
lli fact(int n){
    lli fact =1;
            int i =2;
            while(i<=n){
                fact*=i;
                i++;
            }
            return fact;
}
void solve() {
       long long n;
        int d;
        cin >> n >> d;

        vector<int> res;
        res.push_back(1);
        if(n>=3||d%3==0)res.push_back(3);
        if(d==5)res.push_back(5);
        if(n>=3||(n==2&&d==7))res.push_back(7);
        if(n>=6||d%9==0)res.push_back(9);
        else if(fact(n)*d%9==0)res.push_back(9);
        
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
}

    

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

