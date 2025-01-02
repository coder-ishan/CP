#include "bits/stdc++.h"

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin>>s;
    map<char,int>m;
    int maxi =-1;
    int mini =100;
    for(int i =0;i<n;i++){
        m[s[i]]++;
    }
    for(int i =0;i<n;i++){
        maxi = max(m[s[i]],maxi);
        mini= min(m[s[i]],mini);
    }
    int id1=0;
    int id2=0;
    
        for(int i =0;i<n;i++){
            if(m[s[i]]==mini){
                id1=i;
            }
            if(m[s[i]]==maxi){
                id2=i;
            }
        }
    if(maxi==mini &&n!=0){
        for(int i =1;i<n;i++){
            if(s[i]!=s[0]){
                s[0]=s[i];
                break;
            }
        } 
    }
    else{
        s[id1]=s[id2];
    }
    cout<<s<<endl;
    
}

    

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

