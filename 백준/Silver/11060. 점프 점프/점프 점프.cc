#include<bits/stdc++.h>
using namespace std;
int n,cnt,temp;
vector<int>v;
int visited[1004];
queue<int>q;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	visited[0] = 1;
	q.push(0);
	
	while(q.size()){
		int now = q.front();
		q.pop();
		for(int i=v[now];i>0;i--){
			int next = now+i;
			if(next>n) continue;
			if(!visited[next]){
				visited[next] = visited[now]+1;
				q.push(next);
			}
		}
	}
	
	
//	for(int i=0;i<n;i++){
//		cout<<visited[i]<<' ';
//	}cout<<'\n';
	
	if(visited[n-1]) cout<<visited[n-1]-1;
	else cout<<-1;
}
		