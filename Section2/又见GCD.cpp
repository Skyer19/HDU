#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int n,a,b,c;

int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	scanf("%d",&n);
	while(n--){
		a=0;b=0;c=0;
		scanf("%d%d",&a,&b);
		for(int c=b+1;;c++){
			if(gcd(a,c)==b){
				printf("%d\n",c);
				break;
			}
		}
	}
}
