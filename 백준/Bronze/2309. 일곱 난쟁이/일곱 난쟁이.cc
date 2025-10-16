#include<bits/stdc++.h>
using namespace std;
int n,temp,sum;
vector<int>v;

int main(){
	for(int i=0;i<9;i++){
		cin>>n;
		v.push_back(n);
		sum+=n;
	}
	
	sort(v.begin(),v.end());
	
	
	for(int i=0;i<9;i++){
		for(int j=0;j<i;j++){
			if(sum-v[i]-v[j] == 100){
//				cout<<v[i]<<' '<<v[j];
				for(int k=0;k<9;k++){
					if(k==i ||k==j) continue;
					else cout<<v[k]<<'\n';
				}
				return 0;
			}
		}
	}
}