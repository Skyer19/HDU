#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
//Memory Limit Exceeded
using namespace std;
long  a,b,n,num[100000009];
long  mul(int n){
	if(n==1||n==2) return 1;
	else if(num[n]) return num[n];
	else {
		num[n]=(a*mul(n-1)+b*mul(n-2))%7;
		return num[n];		
	}
}
int main(){
	while(cin>>a>>b>>n){
		if(a+b+n==0) return 0;
		cout<<mul(n)<<endl;
	}
	return 0;
}
