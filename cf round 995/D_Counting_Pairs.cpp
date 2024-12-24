#include "bits/stdc++.h"

using namespace std;
#define lli long long int
void solve(){
   lli n,x,y;
   cin>>n>>x>>y;
   vector<lli>a(n);
   lli sum =0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
   }
   sort(a.begin(),a.end());
   int s=1,e=n-1;
   lli count=0;
   lli lb = sum-y;
   lli ub = sum-x;
   for(int i=0;i<n;i++){
        lli curr = a[i];
        s= i+1;
        if(s<=n-1){
            while(curr+a[s]<lb){
                s++;
                if(s>n-1)break;
            }
           // cout<<s<<"bbb"<<i<<"ccc"<<curr<<endl;
        }
       
        if(e>=0){
            while(curr+a[e]>ub){
                e--;
                if(e<0)break;
            }
            //cout<<e<<"uuuu"<<i<<"vvvv"<<curr<<endl;
        }
        
        if(s>e)break;
        count+= e-s+1;
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

