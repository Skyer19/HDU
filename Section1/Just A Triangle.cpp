#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int a[3];
int main(){
	int t;
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
			cout<<"good"<<endl;
		}else if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2]){
			cout<<"perfect"<<endl;
		}else{
			cout<<"just a triangle"<<endl;
		}
		
	}
}
