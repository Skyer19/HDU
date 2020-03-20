#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int n,N;
int main(){
	scanf("%d",&n);
	while(n--){
	double k=0,a=0;
	scanf("%d",&N);
	a=N*log10(N);	
	k=a-(__int64)a;
	printf("%d\n",int(pow(10,k)));
	}
	return 0;
}
