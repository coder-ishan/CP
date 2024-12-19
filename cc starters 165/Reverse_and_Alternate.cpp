#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#include "bits/stdc++.h"
using namespace std;

#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
void solve() {
   int n;
   cin>>n;
   string s;
   cin>>s;
   int z=0,o=0;
   for(int i =0;i<n-1;i++){
       if(s[i]=='0'&&s[i+1]=='0')z++;
       else if(s[i]=='1'&&s[i+1]=='1')o++;
   }
   if(z>1||o>1)cno;
   else {
      if(z==1&&o==0)
      {
          if(s[0]=='1'|| s[n-1]=='1')cyes;
          else cno;
      }
      else if(z==0&&o==1){
          if(s[0]=='0'|| s[n-1]=='0')cyes;
          else cno;
      }
      else cyes;
   }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}