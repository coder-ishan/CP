#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#include "bits/stdc++.h"

using namespace std;

#define ll long long int
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl

//Good problem  Editorial solution
void solve() {
    string s; 
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int best = s[i] - '0', pos = i;
       
        for (int j = i; j < min(i + 10,n); j++) {
            if (s[j] - '0' - (j - i) > best) {
                best = s[j] - '0' - (j - i);
                pos = j;
            }
        }
        while (pos > i) {
            swap(s[pos], s[pos - 1]);
            pos--;
        }
        s[i] = char(best + '0');
    }
    cout << s<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}