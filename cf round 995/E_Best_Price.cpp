#include "bits/stdc++.h"

using namespace std;
#define lli long long int
int Maxpossible(lli x, vector<pair<lli, lli> > &data, lli k) {
    lli neg = 0;  
    lli res = 0;  

    for (int i = 0; i < data.size(); i++) {
        if (x <= data[i].first) {
           
            res += x;
        } else if ( x > data[i].first && x <= data[i].second) {
            neg++;
            res += x;
        }
    }
    return neg > k ? -1 : res;
}

void solve(){
   lli n,k;
   cin>>n>>k;
   vector<lli>a(n);
   vector<lli>b(n);
   vector<pair<lli,lli> >data;
   lli mini=INT_MAX;
   lli maxi =-1;
   for(int i=0;i<n;i++){
    cin>>a[i];
        if(mini>a[i])mini=a[i];
        if(maxi<a[i])maxi =a[i];
   }
   for(int i=0;i<n;i++){
        cin>>b[i];
        if(mini>b[i])mini=b[i];
        if(maxi<b[i])maxi =b[i];
        data.push_back(make_pair(a[i],b[i]));
   }
    sort(data.begin(),data.end());
    reverse(data.begin(),data.end());
   
    lli xs=mini,xe =maxi;
    lli res=0;
    lli out=0;
    
    while (xs <= xe) { 
    lli mid = xs + (xe - xs) / 2;
    lli result = Maxpossible(mid, data, k);

    if (result == -1) {
        xe = mid - 1;
    } else if (result <res) {
        xe = mid - 1;
    } else if (result >= res) {
        xs = mid + 1;
        res = result;
    }
}

   cout<<res<<endl; 
   
  
}

    

int main(){
     int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

