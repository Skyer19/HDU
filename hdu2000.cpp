#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	char c[3];
	while(cin>>c[0]>>c[1]>>c[2]){
		sort(c,c+3);
		cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;
	}
	return 0;
} 
