#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int m,n;
	while(cin>>m>>n){
	int gcdd=gcd(m,n);
//	cout<<gcdd<<endl;
	cout<<m/gcdd*n<<endl;
	}
	return 0;
}
