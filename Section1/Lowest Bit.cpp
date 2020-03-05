#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0)  return 0;
		int k=-1;
		while(n>0){	
			k++;	
			if(n%2==1){
				break;
			}
			n=n/2;
//			cout<<n<<endl;
			
		}
//		cout<<"k="<<k<<endl;
		cout<<(1<<k)<<endl;
	}
}
