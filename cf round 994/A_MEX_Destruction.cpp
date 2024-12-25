#include "bits/stdc++.h"

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int seg = 0;
    bool inside = false;
    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            if(!inside) {
                seg++;
                inside = true;
            }
        } else {
            inside = false;
        }
    }
    if(seg == 0) {
        cout << "0" << endl; 
    } else if(seg == 1) {
        cout << "1" << endl; 
    } else {
        cout << "2" << endl; 
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

