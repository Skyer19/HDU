#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int num[25];
int n;
int f(int n){
	num[0]=0;
	num[1]=1;
	for(int i=2;i<n;i++){
		num[i]=num[i-1]+num[i-2];
	}	
}
int main(){
	
	f(21);
	while(~scanf("%d",&n)){
		if(n<21){
			printf("%d\n",num[n]);
		}else{
			double a=(1+sqrt(5))/2;
			double temp=-0.5*log10(5.0)+n*log10(a);
			temp-=(int)temp;
			temp=pow(10,temp);
			while(temp<1000){
				temp*=10;
			}
			printf("%d\n",(int)temp);
		}
	}
}
