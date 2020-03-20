#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<algorithm>
using namespace std;
char s[1001];
int fuction(long long n){
	long long sum=0;
	while(n>0){
	sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
	while(cin>>s){
		long long num=0;	
		for(int i=0;i<strlen(s);i++){
			num+=s[i]-'0';
		}
		if(num==0) return 0;
		while(num>10){
		   num=fuction(num);
		}
		printf("%lld\n",num);
	}
	return 0;
}
