#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==0) return 0;
		int num=0,sum=0;
		for(int i=0;i<n;i++){
			scanf("%d",&num);
			sum=sum^num;
		}
		printf("%d\n",sum);
	}
	return 0;
}
