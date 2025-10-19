#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	ll n,x;
	cin>>n;
	vector<ll>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}cin>>x;
	
	sort(v.begin(),v.end());
	
	ll l = 0, r = n-1;
	ll ret =0;
	
	while(l<r){
		ll sum = v[l]+v[r];
		if(sum==x){
			ret++;
			l++;
			r--;
		}else if(sum<x){
			l++;
		}else {
			r--;
		}
	}cout<<ret;
}