#include "bits/stdc++.h"

using namespace std;

#define lli long long int
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl

// 0101010101010   max zero possible  = no of 1 +1
//011011011011
// 11011011011011  max one possible = 2*no of 0 + 2


void solve(){
    int z,o;
    cin>>z>>o;
    if(z > o+1 ||o> 2*z+1 ){
        cout<<"-1"<<endl;
        return;
    }
    string res;
    while(o>0||z>0){
        
    }
}

    

int main(){
    int t;
   t=1;
    while(t--){
        solve();
    }
    return 0;
}

