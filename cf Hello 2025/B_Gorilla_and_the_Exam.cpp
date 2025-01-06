#include "bits/stdc++.h"

using namespace std;

void solve(){
    int n,k;
    cin >>n>>k;
    int a[n];
    map<int,int>freq;
    for(int i =0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    vector<pair<int,int> >sorter;
    for(auto it: freq){
        sorter.push_back(make_pair(it.second,it.first));
    }
    sort(sorter.begin(),sorter.end());
    for(int i =0;i<sorter.size();i++){
        if(k>sorter[i].first){
            freq[sorter[i].second] = 0;
            k-=sorter[i].first;
        }
        else{
            freq[sorter[i].second]-=k;
            break;
        }
    
    }
    int ct=0;
    for(auto it: freq){
        if(it.second!=0)ct++;
    }
    cout<<max(ct,1)<<endl;


}

    

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

