#include "bits/stdc++.h"

using namespace std;

#define lli long long int
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl



void solve(){
    int n;
    cin>>n;
    vector<pair<int,int> >a;
    for(int i =0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end());
    int best = -1;
    for(int i = 0; i < n; i++) {
    if (best <= a[i].second) {
            best = a[i].second;
        } else {
            best = a[i].first;
        }
    }
    cout<<best<<endl;	

}

    

int main(){
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}

