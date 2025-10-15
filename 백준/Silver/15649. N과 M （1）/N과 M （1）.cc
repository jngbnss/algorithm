#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10],visited[10];

void dfs(int d){
	if(d==m){
		for(int i =0;i<m;i++) cout<<a[i]<< ' ';
		cout<<'\n';
	}
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			visited[i] =1;
			a[d] = i;
			dfs(d+1);
			visited[i] = 0;
		}
	}
}

int main(){
	cin>>n>>m;
	dfs(0);
}