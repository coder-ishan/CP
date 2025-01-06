#include "bits/stdc++.h"


using namespace std;

int calculateXORSum(int a, int b, int c) {
    // Calculate the XOR for each pair and return the sum
    return (a ^ b) + (b ^ c) + (c ^ a);
}

void solve(){
    int l,r;
    cin>>l>>r;
    int a=l+1;
    int maxi =-1;
    for(int i =r-1;i>l;i--){
        if(calculateXORSum(i,r,l)>maxi){
            maxi = calculateXORSum(i,r,l);
            a=i;
        }
    }
    
    cout<<l<<" "<<a<<" "<<r<<" "<<calculateXORSum(l,a,r)<<endl;

}




int main(){
    int t;
    cin>>t;
    
    while(t--){
      solve();
    }
    
    return 0;
}

