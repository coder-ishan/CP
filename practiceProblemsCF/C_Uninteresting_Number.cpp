#include "bits/stdc++.h"

using namespace std;

void solve(){
    string s;
    long long int sum =0;
    int a =0,b=0;
    cin>>s;
    for(int i =0;i<s.size();i++){
        if(s[i]=='2')a++;
        if(s[i]=='3')b++;
        sum += (s[i]-'0');
    }
    bool yes = false;
    a= min(10,a);
    b= min(10,b);
    for(int i =0;i<=a;i++){
        for(int j=0;j<=b;j++){
            if((sum+2*i+6*j)%9==0){
                yes = true;
                break;
            }
        }
    }
    if(!yes){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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

