#include "bits/stdc++.h"
using namespace std;



//Solved using a trie on CF


bool isBad(char a, string b) {
    int ind = (a-'a');
    return b[ind] == '0';
}

void solve() {
    string s;
    cin >> s;
    string bin;
    cin >> bin;
    int k;
    cin >> k;
    
    int i = 0, j = 0;
    int currbad = 0;
    set<string> distinct;
    
    while (j < s.size()) {
       
        if (isBad(s[j], bin)) {
            currbad++;
        }
        
      
        while (currbad > k && i <= j) {
            if (isBad(s[i], bin)) {
                currbad--;
            }
            i++;
        }
        
        
        if (currbad <= k) {
            for(int start = i; start <= j; start++) {
                distinct.insert(s.substr(start, j - start + 1));
            }
        }
        j++;
    }
    
    cout << distinct.size() << endl;
}

int main() {
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}