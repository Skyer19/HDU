#include<iostream>
#include<cstdio>
#include<cstring>
#include<set>
using namespace std;
int main(){
	int n;
	while(cin>>n){	
	set<int> v;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		v.insert(num);
	}
	set<int>::iterator it;
	int flag=0;
	while(v.size()>1){
		if(!flag){
			it=v.end();
			it--;
			printf("%d ",*(it));
			v.erase(it);
			flag=1;
		}else{
			cout<<*(v.begin())<<" ";
			v.erase(v.begin());
			flag=0;
		}
	}
	cout<<*(v.begin())<<endl;
}
}
