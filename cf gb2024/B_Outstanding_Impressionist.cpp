#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")

#include "bits/stdc++.h"

using namespace std;

#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl


void solve() {
    int n;
    cin>>n;
    int l[n],r[n];
    vector<int>m(2*n+1,0);
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        if(l[i]==r[i])m[l[i]]++;
    }
    string res="";
    int maxi=-1;
    vector<int> nz(2*n+1,2*n+1);
    for (int i = 2*n ; i > 0; i--) {
        if (m[i] == 0) {
            nz[i] = i;
        } else if (i < 2*n ) {
            nz[i] = nz[i + 1];
        }
       
        
    }
    for(int i =0;i<n;i++){
            if(l[i]==r[i]){
                if(m[l[i]]>1)res+="0";
                else res+="1";
                
            }
            else{
                int u =l[i];
                if(nz[u]<=r[i])res+="1";
                else res+="0";
        
            }
           
        
    }
    cout<<res<<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}