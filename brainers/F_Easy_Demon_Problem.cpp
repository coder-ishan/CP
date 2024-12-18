#include <iostream>
#include "bits/stdc++.h"

using namespace std;
#define lli long long int 
//TLE

/*
void Mysol(){
    int n,m,q;
    cin>>n>>m>>q;
   
    vector<int>a(n);
    vector<int>b(m);
    vector<int>vertsum;
    vector<int>horzsum;
     //M[I][J]=a[i]*b[j]
    for(int i =0;i<n;i++){//Input
        cin>>a[i];
    }
    for(int i =0;i<m;i++){//Input
        cin>>b[i];
    }
   

    lli totsum=0;
    for(int i =0;i<n;i++){//horzsum
        lli sum =0;
        lli vsum =0;
        for(int j =0;j<m;j++){
            sum+= a[i]*b[j];
        }
        totsum+=sum;
        horzsum.push_back(sum);
    }
    for(int i =0;i<m;i++){//vertsum
        lli sum =0;
        for(int j =0;j<n;j++){
            sum+=a[j]*b[i];
          
        }
        vertsum.push_back(sum);
    }
 

    set<lli>st;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
           st.insert(totsum-horzsum[i]-vertsum[j]+a[i]*b[j]);
        }
      
    }
    
    while(q--){
        int x;
        cin>>x;
        if(st.find(x)!=st.end())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
}
*/


//Editorial Solution
void solve(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<int>a(n);
    vector<int>b(m);
    int suma=0;
    int sumb=0;
    for(int i =0;i<n;i++){//Input
        cin>>a[i];
        suma+=a[i];
    }
    for(int i =0;i<m;i++){//Input
        cin>>b[i];
        sumb+=b[i];
    }
    set<lli>as;
    set<lli>bs;
    for(int i =0;i<n;i++){//Input
        as.insert(suma-a[i]);
    }
    for(int i =0;i<m;i++){//Input
       bs.insert(sumb-b[i]);
    }
 
    while(q--){
        bool f = false;
        int x;
        cin>>x;
       for(int i=1;i*i<=x;i++){
            if(x%i==0){
                if(as.find(i)!=as.end()&&bs.find(x/i)!=bs.end()){
                    f= true;
                    cout<<"YES"<<endl;
                    break;
                }
                else if(bs.find(i)!=bs.end()&&as.find(x/i)!=as.end()){
                    f= true;
                    cout<<"YES"<<endl;
                    break;
                }
            }
       }
       if(!f)cout<<"NO"<<endl;
    }


}



int main(){
    int t;
    //cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}

