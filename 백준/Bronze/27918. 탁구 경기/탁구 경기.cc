//27918
#include<bits/stdc++.h>
using namespace std;
int n,d,p;
char c;
string ret;

int main(){
	cin>>n;
	while(n--){
		cin>>c;
		if(c=='D')  d++;
		else p++;
		ret = to_string(d)+":"+to_string(p);
		if(abs(d-p)==2){
			cout<<ret;
			return 0;
		}
	}cout<<ret;
}