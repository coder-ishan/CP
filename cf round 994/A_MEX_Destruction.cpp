#include "bits/stdc++.h"

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Check for number of contiguous non-zero segments
    int segments = 0;
    bool in_segment = false;

    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            if(!in_segment) {
                segments++;
                in_segment = true;
            }
        } else {
            in_segment = false;
        }
    }

    // Determine the result based on the number of segments
    if(segments == 0) {
        cout << "0" << endl; // All zeros
    } else if(segments == 1) {
        cout << "1" << endl; // One contiguous non-zero segment
    } else {
        cout << "2" << endl; // More than one segment
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

