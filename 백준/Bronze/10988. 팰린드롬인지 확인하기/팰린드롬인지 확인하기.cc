#include<bits/stdc++.h>
using namespace std;
int n;
string s,s1;
int main(){
	cin>>s;
	s1 =s ;
	reverse(s.begin(),s.end());
	if(s1==s) cout<<1;
	else cout<<0;
}