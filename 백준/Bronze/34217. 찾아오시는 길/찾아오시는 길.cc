#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;

int main(){
	cin>>a>>b>>c>>d;
	if(a+c<b+d) cout<<"Hanyang Univ.";
	else if(a+c==b+d) cout<<"Either";
	else cout<<"Yongdap";
}