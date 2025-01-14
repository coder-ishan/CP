#include "bits/stdc++.h"

using namespace std;

#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl


bool ispossible(int i, int curr,vector<int>&a,int k,vector<vector<int> >&dp){
    
    if(i<0)return false;
    if((a[i]+curr)%k==0)return dp[i][curr%k]= true;
    if(dp[i][curr%k]!=-1)return dp[i][curr%k];
    bool take = ispossible(i-1,(curr+a[i])%k,a,k,dp);
    bool nottake = ispossible(i-1,curr,a,k,dp);
    return dp[i][curr%k] = take|nottake;
}
void solve(){
 int n,k;
 cin>>n>>k;
 
 vector<int>a(n);
for(int i =0;i<n;i++){
    cin>>a[i];
    a[i]= a[i]%k;
 }
 if(n>k){
    int prefix[n];
    int ct=0;
    prefix[0]=0;
    for(int i=1;i<n;i++){
        prefix[i]= prefix[i-1]+a[i];
        if(prefix[i]%k==0)ct++;
    }
    if(ct>=2){
        cyes;
        return;
    }
 }
vector<vector<int> >dp(n,vector<int>(1e3+1,-1));


 if(ispossible(n-1,0,a,k,dp))cyes;
 else cno;

}

    

int main(){
    int t;
   t=1;
    while(t--){
        solve();
    }
    return 0;
}

