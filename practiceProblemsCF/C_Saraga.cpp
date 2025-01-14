#include "bits/stdc++.h"

using namespace std;

void solve(){
    string s;
    string t;
    cin>>s>>t;
    vector<string>output;
    for(char i='a';i<='z';i++){
        string res="";
        bool sflag=false;
        bool tflag=false;
        for(int j=0;j<s.size();j++){
            if(s[j]==i){
                res+= s.substr(0,j);
                sflag=true;
                break;
            }
            
        }
        for(int j=t.size()-2;j>=0;j--){
            if(t[j]==i){
                res+= t.substr(j);
                tflag=true;
                break;
            }
        }
        cout<<res<<endl;
        if(sflag&&tflag)output.push_back(res);
    }
    sort(output.begin(),output.end());
    if(t.size()==2){
       
            for(int j=1;j<s.size();j++){
                if(s[j]==t[0]){
                    cout<<s.substr(0,j)+t<<endl;
                    
                    return;
                }
            }
            cout<<-1<<endl;
        
        return;
    }
    else if(output.size()==0){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<output[0]<<endl;
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

