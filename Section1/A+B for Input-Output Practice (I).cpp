#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0) return 0;
		int num=0,sum=0;
		for(int i=0;i<n;i++){
			cin>>num;
			sum=sum^num;
		}
		cout<<sum<<endl;
	}
	return 0;
}
