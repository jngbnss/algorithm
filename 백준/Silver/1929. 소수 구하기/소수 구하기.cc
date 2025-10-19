//1929 s3
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m,n;
bool go(ll x){
	if(x<2) return false;
	for(ll i=2;i*i<=x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	cin>>n>>m;
	for(ll i =n;i<=m;i++){
		if(go(i)) cout<<i<<'\n';
	}
	
	
	return 0;
}