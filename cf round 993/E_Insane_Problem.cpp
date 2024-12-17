#include <iostream>
#include "bits/stdc++.h"

using namespace std;

#define lli long long int 
void solve(){
    lli k,l1,l2,r1,r2;
    cin>>k>>l1>>r1>>l2>>r2;
    lli count =0;
    
    for(int i=0;i<=32;i++){
        lli minx =0;
        lli maxx =0;
        lli s=l1;
        lli e=r1;
        while(s<=e){
            lli mid = s+(e-s)/2;
            if(mid*pow(k,i)>r2){
                e= mid-1;
            }
            else if(mid*pow(k,i)<l2){
                s= mid+1;
            }
            else{
                s=mid+1;
            }
        }
        minx=s;
        s=l1;
        e =r1;
        while(s<=e){
            lli mid = s+(e-s)/2;
            if(mid*pow(k,i)>r2){
                e= mid-1;
            }
            else if(mid*pow(k,i)<l2){
                s= mid+1;
            }
            else{
                e= mid-1;
            }
        }
        maxx =e;
        count+= maxx-minx +1;

    }
    cout<<-1*count<<endl;
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

