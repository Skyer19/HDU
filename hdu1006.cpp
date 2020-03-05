#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;
long long a,b,n;
long long mul(int n){
	if(n==1||n==2) return 1;
	else return (a*mul(n-1)+b*mul(n-2))%7;
}
int main(){
	while(cin>>a>>b>>n){
		if(a+b+n==0) return 0;
		cout<<mul(n)<<endl;
	}
	return 0;
}
