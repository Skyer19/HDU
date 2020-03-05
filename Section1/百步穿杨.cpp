#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,c,temp;
int main(){
	cin>>n;
	while(n--){
		int num[55]={0};
		cin>>c;
//		cout<<"c="<<c<<endl;
		for(int i=0;i<c;i++){
			cin>>temp;
//			cout<<"temp="<<temp<<endl; 
			cin>>num[temp];		
		}
//		for(int i=0;i<30;i++){
//			if(num[i]!=0) cout<<i<<" "<<num[i]<<endl;		
//		}
		
		
		for(int i=1;i<30;i++){
			if(num[i]!=0){
				for(int j=1;j<=num[i];j++){
					cout<<">+";
					for(int k=1;k<=i-2;k++){
						cout<<"-";
					}
					cout<<"+>"<<endl;
				}
				cout<<endl;
			}
		}
	}
}
