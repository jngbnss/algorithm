//2910 빈도정렬

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
int n,c,a[1004]; 
vector<pair<int,int>>v; // 순서인가? 빈도인가?
map<int,int>mp, mp_first;

bool cmp(pair<int,int>a,pair<int,int>b){
	if(a.first==b.first){
		return mp_first[a.second]<mp_first[b.second];
	}
	return a.first>b.first;
}

int main(){
	cin>>n>>c;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
		
		if(mp_first[a[i]] ==0){
			mp_first[a[i]] = i+1;
		}
	}
		
	for(auto i:mp){
			v.push_back({i.second,i.first});
		}
		
	sort(v.begin(),v.end(),cmp);
	for(auto i:v){
		for(int j=0;j<i.first;j++){
			cout<<i.second<<' ';
		}
	}
}