#include "bits/stdc++.h"

using namespace std;


void solve(){
     int n; 
        cin >> n;
        string s; 
        cin >> s;
        bool valid=1;
        bool found=0;
        int cp =0;
        int cs=0;
       if(s[0]=='s')s[0]='.';
       if(s[n-1]=='p')s[n-1]='.';
        
        for(int x=0;x<n;x++){
            if(s[x]=='p')cp++;
            else if(s[x]=='s')cs++;
        }
        if(cp==0||cs==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       
       
      
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


