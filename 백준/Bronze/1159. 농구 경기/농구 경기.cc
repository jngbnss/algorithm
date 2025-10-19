#include<bits/stdc++.h>
using namespace std;
int n;
string s,ret;
int arr[26];

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		arr[s[0]-'a']++;
	}
	
	for(int i=0;i<26;i++){
//		cout<<char(i+'a')<<" : "<<arr[i]<<'\n';
		if(arr[i]>=5) ret+=char(i+'a');
	}
	if(ret.size())cout<<ret;
	else cout<<"PREDAJA";
}