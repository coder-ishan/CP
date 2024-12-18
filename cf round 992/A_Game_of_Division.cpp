#include "bits/stdc++.h"
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		map<int,int>m;
		for(int i =0;i<n;i++){
			cin>>a[i];
			a[i]=a[i]%k;
			m[a[i]]++;
		}
		bool y=  false;
		for(auto it:m){
			if(it.second==1){
				cout<<"YES"<<endl;
				for(int i =0;i<n;i++){
					if(a[i]==it.first){
						cout<<i+1<<endl;
						y=true;
						break;
					}
				}
				break;
			}
		}
		if(!y)cout<<"NO"<<endl;
		
	}
	
	return 0;
}
