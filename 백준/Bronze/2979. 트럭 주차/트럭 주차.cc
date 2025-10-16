#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int s,e;
int ret;
int arr[104];

int main(){
	cin>>a>>b>>c;
	for(int i=0;i<3;i++){
		cin>>s>>e;
		for(int j = s;j<e;j++){
			arr[j]++;
		}
	}
	
	for(int i=0;i<101;i++){
		if(arr[i]==3) ret+=3*c;
		else if(arr[i]==2) ret+=2*b;
		else if(arr[i]==1) ret+=a;
	}
	cout<<ret;
}