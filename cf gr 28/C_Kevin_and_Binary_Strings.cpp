#include "bits/stdc++.h"
using namespace std;
#define ll long long;
 
void solve(){
      string s;
      cin >> s;
      int n= s.size();
      int l2,r2;
            int l = 0, st = 0;
            bool zer = false;
            for (int i = 0; i < n; i++) {
                if (s[i] == '0') {
                    st = i;
                    l = n - i;
                    zer=true;
                    break;
                }
            }
            if(!zer){
                l2=1;
                r2=1;
            }
            else {
                string ans = s;
                int i = 0;
                while (i + l <= n) {
                    string res = s;
                    int j = 0;
                    while (j < l) {
                        res[j + st] = ((res[j + st] - '0') ^ (s[i + j] - '0')) + '0';
                        j++;
                    }
                    if (res > ans) {
                        ans = res;
                        l2 = i+1;
                        r2 = i + l;
                    }
                    i++;
                }

            }
            cout << 1 <<" " << n <<" " << l2<<" " << r2 << endl;
        
}
int main(void) {
    int t;
    cin >> t;
 
    while (t--) {
      solve();
    }
 
    return 0;
}
