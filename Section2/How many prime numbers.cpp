#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int n;
bool check(int num){
	int tp=(int)sqrt(num*1.0);//ÎªÊ²Ã´ °¡°¡°¡°¡ 
	for(int i=2;i<=tp;++i){
		if(num%i==0){
			return true;
			break;
		}
	}
	return false;
}
int main(){

	while(~scanf("%d",&n)){
		int sum=0,m;
		for(int i=0;i<n;++i){
			scanf("%d",&m);
			if(!check(m)) sum++;
		}
		printf("%d\n",sum);
	} 
}
