#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int c;
		cin>>c;
		int num[c];
		for(int i=0;i<c;i++){
			cin>>num[i];
		}
		sort(num,num+c);
		cout<<num[1]<<endl;
	}
}
