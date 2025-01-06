
#include "bits/stdc++.h"


using namespace std;
int calculate_convenience(const vector<int>& a, int l, int r){
    int max_val = a[1];
    int min_val = a[1];
    for (int i = 1 + 1; i <= r; ++i){
    max_val = max(max_val, a[i]);
    min_val = min(min_val, a[i]);
    }
    return max_val - min_val - (r - 1);
}

// Function to calculate the maximum convenience
int get_max_convenience(const vector<int>& a, int n) {
    int max_convenience = INT_MIN;
        for (int l = 0; l < n; ++l) {
            for (int r = l; r < n; ++r) {
                max_convenience = max(max_convenience, calculate_convenience(a, l, r));
            }
        }
        return max_convenience;
}

void solve(){
    int n, q; // n = number of sweaters, q = number of size changes
    cin >> n >> q;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    

    // Initial max convenience
    cout << get_max_convenience(a,n) << endl;

    // Process each update
    for (int i = 0; i < q; ++i) {
        int p, x;
        cin >> p >> x;
        a[p - 1] = x; // Update the p-th sweater (1-indexed to 0-indexed)
        cout << get_max_convenience(a,n) << endl;
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

