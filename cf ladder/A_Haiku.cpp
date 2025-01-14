#include "bits/stdc++.h"

using namespace std;

#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl


bool isSylable(char xyz){
    if(xyz=='a'|| xyz=='e'||xyz=='i'|| xyz=='o'||xyz=='u')return true;
    else return false;
}
void solve(){
  string s1,s2,s3;
  getline ( cin, s1 );
  getline ( cin, s2 );
  getline ( cin, s3 );
  
  int ct=0;
  for(int i =0;i<s1.size();i++){
    if(isSylable(s1[i]))ct++;
  }
  
  if(ct!=5)cno;
  else{
   
    ct=0;
     for(int i =0;i<s2.size();i++){
            if(isSylable(s2[i]))ct++;
        }
        if(ct==7){
            ct=0;
            for(int i =0;i<s3.size();i++){
                if(isSylable(s3[i]))ct++;
            }
            if(ct==5)cyes;
            else cno;
        }
        else{
            cno;
        }
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

